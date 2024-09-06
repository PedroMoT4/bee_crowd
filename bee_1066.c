#include <stdio.h>

int main(){
    int n[5];
    int pa = 0, ip = 0, po = 0, ng = 0;

    for(int i = 0; i < 5; i++){
        scanf("%d", &n[i]);
        if(n[i]%2==0){
            pa++;
        }else if(n[i]%2!=0){
            ip++;
        }

        if(n[i]>0){
            po++;
        }else if(n[i]<0){
            ng++;
        }
    }

    printf("%d valor(es) par(es)\n", pa);
    printf("%d valor(es) impar(es)\n", ip);
    printf("%d valor(es) positivo(s)\n", po);
    printf("%d valor(es) negativo(s)\n", ng);
    
    return 0;
}