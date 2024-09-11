#include <stdio.h>

int main(){

    float v[6], p[6];
    int x = 0;

    for(int i = 0; i < 6; i++){
        scanf("%f", &v[i]);
    }

    for(int i = 0; i < 6; i++){
        if(v[i] > 0){
            p[x] = v[i];
            x++;
        }
    }

    printf("%d valores positivos\n", x);

    float avg, total;
    for(int i = 0; i < x; i++){
        total += p[i];
    }

    avg = total/4;
    printf("%.1f\n", avg);

    return 0;
}