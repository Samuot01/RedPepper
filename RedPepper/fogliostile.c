#include "term_menu.h"

char lettura_operatore(){
    char oper;

        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t>> ");
        scanf("%c",&oper);

return oper;
}



int trova_p(char parolina[]){                       //TROVA_P= trova il last all'interno del vettore, per poi iniziallizzare verif...in "caso 2"
    int i,last;

        for(i=0;i<81;i++){
            if(parolina[i]=='\0'){
                last=i;
                i=81;
            }
        }
}


void style1(){

    printf("\t\t\t\t\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,
           205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
           205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t%c\t\t\t\t     %c",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t%c         1) Inserisci Lettera       %c",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t%c\t\t\t\t     %c",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t%c\t\t\t\t     %c",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t%c         2) Inserisci parola        %c",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t%c\t\t\t\t     %c",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,
           205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,
           205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

}


char lettura_operatore_nascosta(){
    char oper;

        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t>>");
        oper=getcharacter;

return oper;
}


int caso1(char parolina[], int last, char conft[]){
    int i,j,flag,pos=0,cont;
    char lettu;

            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tInserisci la lettera: ");
            scanf(" %c",&lettu);

            flag=0;
            for(i=0,cont=0;i!=last;i++){
                if(lettu==parolina[i]){
                    conft[i]=parolina[i];
                    cont++;
                }
            }

            if(cont==0){
                flag=1;
            }else{
                flag=0;
            }

return flag;
}



int caso2(char parolina[],int last){
    int i,j,flag=0,Ipos=0;
    char verif[last];

        printf("\n\n\n\n");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tIndovina la parola: \n\n\t\t\t\t\t\t\t\t\t\t\t\t\t");

        scanf("%s",verif);

        if(strcmp(verif,parolina)!=0){
            flag=1;
        }

        tsleep(100);

        return flag;
        }


void creazione(){
    int i;

        for(i=0;i<100;i++){
            barra(i);
            tsleep(10);
         }
         barra(100);
}


void barra(int l){
    int i;
        printf("[");
            for(i=0;i<l;i++){
                printf("%c",219);
            }
            for(i=l;i<100;i++){
                printf(" ");
            }
        printf("]");

        printf(" %d%%",l);

            for(i=0;i<106;i++)
                printf("\b");

}


int deadpick_render(int ermos){
    int corrett=0;


        switch (ermos) {

            case 1:
                deadpick();
                tsleep(2000);
                corrett=0;
            break;

            case 2:
                deadpick1();
                tsleep(2000);
                corrett=0;
            break;

            case 3:
                deadpick2();
                tsleep(2000);
                corrett=0;
            break;

            case 4:
                deadpick3();
                tsleep(2000);
                corrett=0;
            break;

            case 5:
                deadpick4();
                tsleep(2000);
                corrett=0;
            break;

            case 6:
                deadpick5();
                tsleep(2000);
                corrett=0;
            break;

            case 7:
                deadpick6();
                tsleep(2000);
                corrett=0;
            break;

            case 8:
                deadpick7();
                tsleep(2000);
                corrett=0;
            break;


            case 9:
                deadpick8();
                tsleep(2000);
                corrett=0;
            break;

            case 10:
                deadpick9();
                tsleep(1000);
                printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t  Hai Perso, troppi tentativi sbagliati (10) ");
                corrett=1;
                tsleep(3000);
                tclear();
                tsleep(500);
                gameover();
                tsleep(9000);
            break;

        }


return corrett;
}



void deadpick(){

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);

}

void deadpick1(){

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);

}

void deadpick2(){

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);

}

void deadpick3(){

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);

}

void deadpick4(){

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                                             ",186,2);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);


}

void deadpick5(){

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                                             ",186,2);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                                             ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);

}

void deadpick6(){

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                                             ",186,2);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c%c                                            ",186,186,92);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);

}

void deadpick7(){

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                                             ",186,2);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c            %c%c%c                                           ",186,47,186,92);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);

}

void deadpick8(){

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                                             ",186,2);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c            %c%c%c                                           ",186,47,186,92);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c              %c                                           ",186,92);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);

}

void deadpick9(){

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                ",186,186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c             %c                                             ",186,2);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c            %c%c%c                                           ",186,47,186,92);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c            %c %c                                           ",186,47,92);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t                   %c                                                            ",186);
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);

}









void gameover(){

    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    tsleep(500);
    printf("\n\t\t\t\t\t\t\t\t  /$$$$$$    /$$$$$$   /$$      /$$  /$$$$$$$$         /$$$$$$   /$$    /$$  /$$$$$$$$  /$$$$$$$ ");
    tsleep(500);
    printf("\n\t\t\t\t\t\t\t\t /$$__  $$  /$$__  $$ | $$$    /$$$ | $$_____/        /$$__  $$ | $$   | $$ | $$_____/ | $$__  $$  ");
    tsleep(500);
    printf("\n\t\t\t\t\t\t\t\t| $$    \__/ | $$  \ $$ | $$$$  /$$$$ | $$             | $$  \ $$ | $$   | $$ | $$       | $$  \ $$  ");
    tsleep(500);
    printf("\n\t\t\t\t\t\t\t\t| $$  /$$$$ | $$$$$$$$ | $$ $$/$$ $$| $$$$$         | $$  | $$ |  $$ / $$/ | $$$$$    | $$$$$$$/  ");
    tsleep(500);
    printf("\n\t\t\t\t\t\t\t\t| $$ |_  $$ | $$__  $$ | $$  $$$| $$| $$__/          | $$  | $$  \  $$ $$/  | $$__/    | $$__  $$  ");
    tsleep(500);
    printf("\n\t\t\t\t\t\t\t\t| $$    \ $$ | $$  | $$ | $$\  $ | $$ | $$             | $$  | $$   \  $$$/   | $$       | $$  \ $$  ");
    tsleep(500);
    printf("\n\t\t\t\t\t\t\t\t|   $$$$$$/ | $$  | $$ | $$ \/  | $$ | $$$$$$$$       |  $$$$$$/    \  $/    | $$$$$$$$ | $$  | $$  ");
    tsleep(500);
    printf("\n\t\t\t\t\t\t\t\t %c_______/  |__/  |__/ |__/    |__/  |________/       %c______/     \_/     |________/ |__/  |__/  ",92,92);
    tsleep(200000);

}

void style(char parolina[]){
    int i,last,pos=0,nmos=0,ermos=0,flag,corret=0;                                          //ermos=error mosse ; nmos=numero mosse utilizzate ; t= serve solo per far fare un giro
    char operatore;
    char conft[80];                                                                         //vettore di confronto: � il vettore appartenente all'utente in cui cerca di scovare la parola giusta tramite le opzioni del menu

        //---------Inizializzazione della parola nel vet CONFT[]---------//

        tclear();
        last=trova_p(parolina);

        conft[0]=parolina[0];                                                               //preparazione del vettore di CONFronto
        for(i=1;i<last;i++){
            conft[i]='_';
        }

        //-------------------------INIZIO Ciclo--------------------------//
        do{
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t LA PAROLA DA TROVARE E'");
        for(i=0;i<last;i++){
            printf(" %c",conft[i]);
        }

        nmos++;
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t    MENU GIOCATORE\n\n");

        style1();

        operatore=lettura_operatore();

        switch (operatore) {                                                                //Men� giocatore

            case '1':
                    flag=caso1(parolina,last,conft);
                    if(flag==1){
                        ermos++;                                                            //contatore mosse sbagliate cosi da sistemare i render
                        corret=deadpick_render(ermos);                                      //insieme delle morti e dei loro style
                    }

            break;

            case '2':
                    corret=caso2(parolina,last);                                            //CORRETTORE= serve a controllare se il risultato della funzione "caso 2" sia 1=Negativo; 0=Positivo

                    if(corret==1){
                        ermos++;
                        corret=deadpick_render(ermos);                                      //vede a che morte � arrivato l'utente e procede ,se necessario, alla chiusura del programma

                    }else{
                        printf("\n\n\n\n");
                        printf("\n\t\t\t\t\t\t\t\t\t\t Complimenti! sei riuscito in %d mosse a scoprire la parola nascosta.",nmos);
                        tsleep(2000);
                        corret=1;                                                           //corret a 1 perch� � riuscito a finire il gioco e quindi fa finire il ciclo
                    }

            break;

        }

    tclear();
    tsleep(100);


    }while(corret==0);
    //-------------------------FINE Ciclo--------------------------//

return last;
}




