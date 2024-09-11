#include <stdio.h>

int main(){
    
    int x, y, up, down;
    int sum = 0;

    scanf("%d", &y);
    scanf("%d", &x);

    if(x > y){
        up=x;
        down=y;
    }else{
        up=y;
        down=x;
    }

    for(int i = (down+1); i < up; i++){
        if(i%2!=0){
            sum+=i;
        }
    }

    printf("%d\n", sum);

    return 0;
}