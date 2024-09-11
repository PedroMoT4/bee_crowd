#include <stdio.h>

int main(){

    int m, n;
    int max, min, result;

    while(1){
        scanf("%d %d", &m, &n);

        if(m <= 0){
            break;
        }else if(n <= 0){
            break;
        }

        if(m > n){
            max = m;
            min = n;
        }else{
            max = n;
            min = m;
        }

        result = 0;
        for(int i = min; i <= max; i++){
            printf("%d ", i);
            result+=i;
        }

        printf("Sum=%d\n", result);
    }

    return 0;
}