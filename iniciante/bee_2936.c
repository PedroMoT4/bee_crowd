#include <stdio.h>

int main(){

    int porcao[5];
    porcao[0] = 300;
    porcao[1] = 1500;
    porcao[2] = 600;
    porcao[3] = 1000;
    porcao[4] = 150;

    int prep[5];
    for(int i = 0; i < 5; i++){
        scanf("%d", &prep[i]);
        porcao[i] = porcao[i] * prep[i];
    }


    int total = 0;
    for(int i = 0; i < 5; i++){
        total = total + porcao[i];
    }

    total = total + 225;
    printf("%d\n", total);

    return 0;
}