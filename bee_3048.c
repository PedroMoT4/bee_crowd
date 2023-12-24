#include <stdio.h>

int main(){

    int n, i , j;
    scanf("%d", &n);

    int seq[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &seq[i]);
    }

    int count = 0;

    int a = seq[0];

    for(i = 0; i < n; i++){
        if(a == 1){
            for(j = i; j < n; j++){
                if(seq[j] == 2){
                    break;
                }
                a = 2;
                i = j;
            }
        }else{
            for(j = i; j < n; j++){
                if(seq[j] == 1){
                    break;
                }
                a = 1;
                i = j;
            }
        }
        count++;
    }

    printf("%d\n", count);

    return 0;
}