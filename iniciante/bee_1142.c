#include <stdio.h>

int main(){

    int x, linhas = 0, i = 1;
    scanf("%d", &x);

    while(linhas < x){
        printf("%d ", i);
        i++;
        printf("%d ", i);
        i++;
        printf("%d PUM\n", i);
        i+=2;
        linhas++;
    }

    return 0;
}