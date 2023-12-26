#include <stdio.h>

int main(){
    int n, i, t, v, d, dt;

    scanf("%d", &n);
    i = 0;
    d = 0;
    dt = 0;

    while(i < n){
        scanf("%d %d", &t, &v);
        d = t * v;
        dt = dt + d;
        i++;
    }

    printf("%d\n", dt);

    return 0;
}