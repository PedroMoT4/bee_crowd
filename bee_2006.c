#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    int ans[5];

    for(int i = 0; i < 5; i++){
        scanf("%d", &ans[i]);
    }

    int count = 0;

    for(int j = 0; j < 5; j++){
        if(ans[j] == t){
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}