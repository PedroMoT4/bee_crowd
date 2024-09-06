#include <stdio.h>

int main(){
    int n[5];
    int p;

    for(int i = 0; i < 5; i++){
        scanf("%f", &n[i]);
    }
    
    for(int i = 0; i < 5; i++){
        if(n[i]%2 == 0){
            p++;
        }
    }

    printf("%d valores pares\n", p);

    return 0;
}