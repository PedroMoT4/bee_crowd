#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int seq[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &seq[i]);
    }

    int count = 0;

    for(int j = 0; j < n; j++){
        if(seq[j] != seq[j+1]){
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}