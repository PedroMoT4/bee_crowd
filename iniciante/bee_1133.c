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

    for(int i = x+1; i < y; i++){
        if(i%5 == 2){
            printf("%d\n", i);
        }else if(i%5 == 3){
            printf("%d\n", i);
        }
    }

    return 0;
}