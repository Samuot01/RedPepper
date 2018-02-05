#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include "fogliostile1.c"
#include "UNIX.c"


void let_parolina(char parolina[]);
void style(char parolina[]);
void singleplayer(char parolina[]);



int main(){
char parolina[80];
char trovatore;
int i,j;

    for(i=0;i<80;i++){
        parolina[i]=0;
    }

    menu_iniziale();
    trovatore=lettura_operatore_nascosta();
    switch (trovatore) {

        case '1':
                singleplayer(parolina);
                system("cls");
        break;

        case '2':
                let_parolina(parolina);
                system("cls");
        break;

        case '3':

                system("color b");
        break;

        case '4':
                exit(1);
        break;

        default:

        break;

    }

    creazione();

    style(parolina);

    Sleep(500);


return 0;

}

void let_parolina(char parolina[]){
int i,j;

    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tInserisci parola da trovare: ");
    for(i=0;i<81;i++){

        parolina[i]=getch();

            if(parolina[i]!=' '){
                printf("*");
            }
            else if(parolina[i]==' '){

                    parolina[i]='\0';
                    i=81;
            }


    }

}


void singleplayer(char parolina[]){

  FILE *fd;
  int a, i, j;

            //apre il file
  fd = fopen("dizionario.txt", "r");
  if( fd==NULL ) {
    perror("Errore in apertura del file");
    exit(1);
  }

  srand(time(NULL)+clock());


         //legge il primo intero
    a=0;
    a = rand()%105;
    for(i=0; i<a; i++){
        fscanf(fd, "%s", parolina);
    }

		// chiude il file
    fclose(fd);

}











