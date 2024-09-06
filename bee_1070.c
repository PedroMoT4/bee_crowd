#include <stdio.h>

int main(){
    int x, aux;
    scanf("%d", &x);
    
    if(x%2==0){
        aux = x + 1;
    }else{
        aux = x;
    }

    for(int i = 0; i < 6; i++){
        printf("%d\n", aux);
        aux+=2;
    }

    return 0;
}