#include <stdio.h>

int main(){
    float i = 0, j = 1;
    int x;
    while(i <= 2.2){
        for(x = 0; x < 3; x++){
            if(i > 0 && i < 1 || i > 1 && i < 2){
                printf("I=%.1f J=%.1f\n", i, j);
            }else{
                printf("I=%.0f J=%.0f\n", i, j);
            }
            j++;
        }
        i+=0.2;
        j-=3;
        j+=0.2;
    }

    return 0;
}