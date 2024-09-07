#include <stdio.h>

int main(){

    int n[100];
    int max = 0, pos = 0;

    for(int i = 0; i < 100; i++){
        scanf("%d", &n[i]);
        if(n[i] > max){
            max = n[i];
            pos = i+1;
        }
    }

    printf("%d\n", max);
    printf("%d\n", pos);

    return 0;
}