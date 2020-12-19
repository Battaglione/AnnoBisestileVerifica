#include <stdio.h>

int main(){
    int anno, fine;
    float bisestile1, bisestile2, bisestile3;
    do{
        printf("Inserisci l'anno; Inserisci un numero minore di 0 per uscire\n");
        scanf("%d", &anno);

        if(anno < 0){
            fine = 1;
        }
         else{
            fine = 0;
        }
        switch(fine){
            case 0:
                bisestile1 = anno % 4;
                bisestile2 = anno % 400;
                bisestile3 = anno % 100;

                if(bisestile3 == 0){
                    printf("L'anno non e' bisestile\n");
                    break;
                }

                else{
                    if(bisestile1 == 0 || bisestile2 == 0){
                        printf("L'anno e' bisestile\n");
                        break;
                    }
                }

                if(bisestile1 != 0 && bisestile2 != 0){
                    printf("L'anno non e' bisestile\n");
                    break;
                }

                break;
            case 1:
                printf("Fine\n");
                break;
        }
    }while(fine == 0);
}