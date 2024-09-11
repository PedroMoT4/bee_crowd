#include <stdio.h>
#include <math.h>

double delta(double a, double b, double c);
double root1(double delta, double a, double b);
double root2(double delta, double a, double b);

int main(){

    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    double d;
    double r1, r2;

    d = delta(a, b, c);
    r1 = root1(d, a, b);
    r2 = root2(d, a, b);

    if(d < 0 || a == 0){
        printf("Impossivel calcular\n");
    }else if(r1 == 0 || r2 == 0){
        printf("Impossivel calcular\n");
    }else{
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }

}

double delta(double a, double b, double c){
    double delta;

    delta = sqrt(pow(b, 2) - 4*a*c);

    return delta;
}

double root1(double delta, double a, double b){
    double r1;
    double upper;

    upper = (-b) + delta;

    if(upper == 0){
        r1 = 0;
    }else{
        r1 = upper/(2*a);
    }

    if(isnan(r1)){
        r1 = 0;
    }

    return r1;
}

double root2(double delta, double a, double b){
    double r2;

    double upper;

    upper = (-b) - delta;

    if(upper == 0){
        r2 = 0;
    }else{
        r2 = upper/(2*a);
    }

    if(isnan(r2)){
        r2 = 0;
    }

    return r2;
}