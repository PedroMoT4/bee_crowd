#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, m;

    scanf("%d %d", &n, &m);
    
    /*
    fechou -1 +2 -> +1
    clicou -1
    */

    char acoes[60];
    char f[] = "fechou", c[] = "clicou";
    int abas = n;

    for(int i = 0; i < m; i++){
        scanf("%s", acoes);
        if(strcmp(acoes, f) == 0){
            abas++;
        }else{
            abas--;
        }
    }

    printf("%d\n", abas);

    return 0;
}