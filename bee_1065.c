#include <stdio.h>

int main(){
    int n[5];
    int p = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d", &n[i]);
        if(n[i]%2==0){
            p++;
        }
    }

    printf("%d valores pares\n", p);

    return 0;
}