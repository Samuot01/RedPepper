#include <stdio.h>
#include <string.h>
#include <time.h>
#include "term_menu.h"
#include "fogliostile.h"


void multiplayer(char parolina[]);
void singleplayer(char parolina[]);
void record_lettura();
void record_scrittura(int nmos, int record);
void vet0( char parolina[]);


int main(){
    char parolina[80];
    int trovatore;
    int i,j,x=0,y=0;

        vet0(parolina);

        resize(80,160);

        while(trovatore = create_menu("menu.txt",106,25,4,177,178,176,'<','>')){

            switch (trovatore) {

                case 1:
                        singleplayer(parolina);         //Singleplayer
                        tclear();
                break;

                case 2:

                        multiplayer(parolina);         //Multiplayer
                        tclear();

                break;

                case 3:

                break;

            }
            creazione();

            style(parolina);

            tsleep(500);

        }



return 0;

}


void vet0(char parolina[]){
    int i;

        srand(time(NULL));
        for(i=0;i<80;i++){
            parolina[i]=0;
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

void multiplayer(char parolina[]){
    int i,j;

        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tInserisci parola da trovare: ");
        for(i=0;i<81;i++){

            parolina[i]=getcharacter;

                if(parolina[i]!=' '){
                    printf("*");
                }
                else if(parolina[i]==' '){

                        parolina[i]='\0';
                        i=81;
                }

        }

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

void record_scrittura(int nmos,int record){
    FILE *fp;

            if(nmos > record){
                printf("NUOVO RECORD !!! \t");

                fp = fopen("record", "w");
                fwrite(&nmos, 1, 1, fp);
                fclose(fp);
            }

}

