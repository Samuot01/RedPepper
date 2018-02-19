#include <stdio.h>
#include <stdlib.h>

#if defined(__unix__) || defined(__APPLE__)
    #include <unistd.h>
    #include <termios.h>
    #include <sys/ioctl.h>
    #include <fcntl.h>
    char onechar();
    int is_press();
    void msleep(int ms);

    #define getcharacter onechar
    #define clearconsole system("clear");

#elif defined(_WIN32) || defined(_WIN64)
    #include <Windows.h>

    #define msleep Sleep
    #define is_press kbhit
    #define getcharacter getch
    #define clearconsole system("cls");
#endif

#if defined(__unix__) || defined(__APPLE__)
    void resize(unsigned int cols, unsigned int rows){
        /*
            resize the terminal window
            @params{
                unsigned int cols: the cols for resizing terminal
                unsigned int rows: the rows for resizing terminal
            }
            NOTE:
                - resize command is alive only in emulated terminal, not in tty.
                - not all terminal emulator has a support for resize command.
        */
        char cmd[30];
        sprintf(cmd, "resize -s %u %u",cols,rows);
        system(cmd);
    }
    char onechar(){
        /*
            get a char without press enter
            @params{
                void
            }
            return int
            source: StackOverFlow
        */
        char ch;
        system("/bin/stty raw");
        ch = getchar();
        system("/bin/stty cooked");
        putchar('\b');

        return ch;
    }

    void msleep(int ms){
        /*
            function for sleep program
            @params{
                - int ms: time to sleep in milliseconds
            }
        */
    	char c[20];
    	sprintf(c,"sleep %f",(float)ms/1000.0);
    	system(c);
    }

    int is_press(){
        /*
            check if a button is pressed
            @params{
                void
            }
            return char
            source: StackOverFlow
        */
      	struct termios oldt, newt;
      	int ch;
      	int oldf;

      	tcgetattr(STDIN_FILENO, &oldt);
      	newt = oldt;
      	newt.c_lflag &= ~(ICANON | ECHO);
      	tcsetattr(STDIN_FILENO, TCSANOW, &newt);
      	oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
      	fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

      	ch = getchar();

      	tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
      	fcntl(STDIN_FILENO, F_SETFL, oldf);

      	if(ch != EOF){
        	ungetc(ch, stdin);
        	return 1;
        }
    	return 0;
    }
#elif defined(_WIN32) || defined(_WIN64)
    void resize(unsigned int cols, unsigned int rows){
        /*
            resize the prompt window
            @params{
                unsigned int cols: the cols for resizing terminal
                unsigned int rows: the rows for resizing terminal
            }
        */
        char cmd[40];
        sprintf(cmd, "mode con:cols=%u lines=%u",cols,rows);
        system(cmd);
    }
#endif

char getchar_clear(){
    /*
        getchar that don't display the pressed char
        @params{
            void
        }
        return char;
    */
    char c;
    c=getchar();
    printf("\b\b\b\b\b");
    return c;
}

