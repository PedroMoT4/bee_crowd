#include <stdio.h>

int main(){
    int x, aux = 1;

    scanf("%d", &x);

    while(aux<=x){
        printf("%d\n", aux);
        aux+=2;
    }

    return 0; 
}