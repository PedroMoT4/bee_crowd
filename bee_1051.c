#include <stdio.h>

int main(){
    float r;
    float t, t1, t2, t3;

    scanf("%f", &r);
    if(r <= 2000){
        printf("Isento\n");
    }else if(r>=2000.01 && r<=3000.00){
        t = (r - 2000)*0.08;
        printf("R$ %.2f\n", t);
    }else if(r>=3000.01 && r<=4000.00){
        t2 = ((r-3000)*0.18);
        t1 = 1000.00*0.08;
        t = t1 + t2;
        printf("R$ %.2f\n", t);
    }else{
        t3 = (r-4500.00)*0.28;
        t2 = 1500*0.18;
        t1 = 1000*0.08;
        t = t1+ t2 + t3;
        printf("R$ %.2f\n", t);
    }
    return 0;
}