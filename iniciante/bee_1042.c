#include <stdio.h>

int main(){
    int a, b, c, in[3], temp;

    scanf("%d %d %d", &a, &b, &c);

    in[0] = a;
    in[1] = b;
    in[2] = c;

    for(int i = 0; i < 2; i++){
        for(int j = i + 1; j < 3; j++){
            if(in[i] > in[j]){
                temp = in[i];
                in[i] = in[j];
                in[j] = temp;
            }
        }
    }
    
    for(int i = 0; i < 3; i++){
        printf("%d\n", in[i]);
    }

    printf("\n");

    printf("%d\n%d\n%d\n", a, b, c);

}