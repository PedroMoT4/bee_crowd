#include <stdio.h>

int main(){
    float x, r, pct;

    scanf("%f", &x);

    if(x > 0 && x <= 400.00){
        pct = 15;
        r = x*(pct/100);

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", x+r, r);

    }else if(x>=400.01 && x<=800.00){
        pct = 12;
        r = x*(pct/100);

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", x+r, r);

    }else if(x>=800.01 && x<=1200.00){
        pct = 10;
        r = x*(pct/100);

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", x+r, r);
    }else if(x>=1200.01 && x<=2000.00){
        pct = 7;
        r = x*(pct/100);

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", x+r, r);


    }else if(x>2000.00){
        pct = 4;
        r = x*(pct/100);

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", x+r, r);

    }

    return 0;
}