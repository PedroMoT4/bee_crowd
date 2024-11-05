#include <stdio.h>

int main(){

    int x, linhas = 0, i = 1;
    scanf("%d", &x);

    while(linhas < x){
        printf("%d ", i);
        printf("%d ", i*i);
        printf("%d\n", i*i*i);

        printf("%d ", i);
        printf("%d ", i*i + 1);
        printf("%d\n", i*i*i + 1);
        i++;
        linhas++;
    }

    return 0;
}