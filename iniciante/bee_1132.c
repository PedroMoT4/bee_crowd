#include <stdio.h>

int main(){
    int x, y;
    int soma = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if(x > y){
        int aux;
        aux = x;
        x = y;
        y = aux;
    }

    for(int i = x; i <= y; i++){
        if(i%13 != 0){
            soma = soma + i;
        }
    }

    printf("%d\n", soma);

    return 0;
}