#include <stdio.h>
#include <string.h>
#include <time.h>
#include "fogliostile.c"


void multiplayer(char parolina[]);
void style(char parolina[]);
void singleplayer(char parolina[]);
void record_lettura();
void record_scrittura(int record);



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
                    singleplayer(parolina);         //Singleplayer
                    clearconsole
            break;

            case '2':

                    multiplayer(parolina);         //Multiplayer
                    clearconsole

            break;

            case '3':

                    printf("SISTEM ERROR WINDOWS FAKE EDITION /2017/2018/");

            break;

            case '0':
                    clearconsole
                    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t GRAZIE PER AVER UTILIZZATO IL NOSTRO PROGRAMMA");
            break;

            default:
                    trovatore=1;
            break;

        }

        creazione();

        style(parolina);

        msleep(500);


return 0;

}

void multiplayer(char parolina[]){
    int i,j;

        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tInserisci parola da trovare: ");
        for(i=0;i<81;i++){

            parolina[i]=getcharacter();

                if(parolina[i]!=' '){
                    printf("*");
                }
                else if(parolina[i]==' '){

                        parolina[i]='\0';
                        i=81;
                }

        }

}


void singleplayer(char parolina[]){                 //Singleplayer= legge una parola da un dizionario.txt

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

void record_lettura(){
    int record = 0;
    FILE *fp;

        fp = fopen("record", "r");
        if(fp != NULL){
            fread(&record, 1, 1, fp);
            fclose(fp);
        }
}

void record_scrittura(int nmos){
    FILE *fp;

            if(nmos > record)
            {
                printf("NUOVO RECORD !!! \t"

                fp = fopen("record", "w");
                fwrite(&mosse, 1, 1, fp);
                fclose(fp);
            }

}

