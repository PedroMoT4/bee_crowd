#include <stdio.h>

int main(){

    int n, fact;

    scanf("%d", &n);

    fact = 1;

    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }

    printf("%d\n", fact);

    return 0;
}