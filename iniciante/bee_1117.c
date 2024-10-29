#include <stdio.h>

int main(){
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

    return 0;
}