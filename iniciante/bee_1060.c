#include <stdio.h>

int main(){

    float v[6];
    int x = 0;

    for(int i = 0; i < 6; i++){
        scanf("%f", &v[i]);
    }    

    for(int i = 0; i < 6; i++){
        if(v[i] > 0){
            x++; 
        }
    }

    printf("%d valores positivos\n", x);

    return 0;
}