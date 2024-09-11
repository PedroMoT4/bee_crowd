#include <stdio.h>

int main(){

    int n;

    scanf("%d", &n);

    int x, y, max, min;
    int results[n];

    for(int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);

        if(x > y){
            max = x;
            min = y;
        }else if(x < y){
            max = y;
            min = x;
        }else{
            max = x;
            min = max;
        }

        results[i] = 0;

        for(int j = min+1; j < max; j++){
            if(j%2!=0){
                results[i] = results[i]+j;
            }
        }

    }
        
    for(int i = 0; i < n; i++){
        printf("%d\n", results[i]);
    }

    return 0;
}