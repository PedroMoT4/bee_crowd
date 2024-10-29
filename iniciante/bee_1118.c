#include <stdio.h>

void calculo();

int main(){
    int option;

    calculo();

    printf("novo calculo (1-sim 2-nao)\n");
    
    while(1){

        scanf("%d", &option);

        if(option == 1){
            calculo();
            printf("novo calculo (1-sim 2-nao)\n");
        }else if(option == 2){
            break;
        }else{
            printf("novo calculo (1-sim 2-nao)\n");
        }
    }

    return 0;
}

void calculo(){
    float validas[2];
    float n, media;
    int i = 0;

    while(1){
        scanf("%f", &n);

        if(n >= 0 && n <= 10){
            validas[i] = n;
            i++;
        }else{
            printf("nota invalida\n");
        }
        int j = 0;
        if(i >= 2){
            media = (validas[j]+validas[j+1])/2;
            printf("media = %.2f\n", media);
            break;
        }
    }
}