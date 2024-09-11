#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);
    
    if (a >= b + c || b >= a + c || c >= a + b){
        printf("NAO FORMA TRIANGULO\n");
    }else if(pow(a, 2)==pow(b, 2)+pow(c, 2) || pow(b, 2)==pow(a, 2)+pow(c, 2) || pow(c, 2)==pow(b, 2)+pow(a, 2)){
        printf("TRIANGULO RETANGULO\n");
    }else if(pow(a, 2)>pow(b, 2)+pow(c, 2) || pow(b, 2)>pow(a, 2)+pow(c, 2) || pow(c, 2)>pow(b, 2)+pow(a, 2)){
        printf("TRIANGULO OBTUSANGULO\n");
    }else if(pow(a, 2)<pow(b, 2)+pow(c,2) || pow(b, 2)<pow(a, 2)+pow(c,2) || pow(c, 2)<pow(b, 2)+pow(a,2)){
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(a==b && a==c){
        printf("TRIANGULO EQUILATERO\n");
    }
    
    if((a==b && a!=c) || (a==c && b!=c) || (b==c && a!=b)){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}