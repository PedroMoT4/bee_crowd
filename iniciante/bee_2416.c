#include <stdio.h>

int main(){
    int c, n, r;

    scanf("%d %d", &c, &n);

    r = c % n;

    printf("%d\n", r);


    return 0;
}