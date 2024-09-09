#include <stdio.h>

int main(){

    int i = 1, j = 7;

    while(i <= 9){
        for(int x = 0; x < 3; x++){
            printf("I=%d J=%d\n", i, j);
            j-=1;
        }
        i+=2;
        j+=5;
    }

    return 0;
}