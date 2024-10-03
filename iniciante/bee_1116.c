#include <stdio.h>

int main(){
    int n;
    float x, y, result;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%f %f", &x, &y);

        if(y == 0){
            printf("divisao impossivel\n");
        }else{
            result = x / y;
            printf("%.1f\n", result);
        }
    }

    return 0;
}