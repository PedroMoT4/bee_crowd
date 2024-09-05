#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    int q, c;

    for(int i = 1; i <= n; i++){
        q = i*i;
        c = i*i*i;

        printf("%d %d %d\n", i, q, c);
    }

    return 0;
}

