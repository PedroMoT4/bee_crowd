#include <stdio.h>

int main(){
    int grenais, ginter, ggremio, option, vinter, vgremio, empates;
    grenais = 0;
    ginter = 0;
    ggremio = 0;
    vinter = 0;
    vgremio = 0;
    empates = 0;

    scanf("%d %d", &ginter, &ggremio);
    grenais++;
    if(ginter > ggremio){
        vinter++;
    }else if(ginter < ggremio){
        vgremio++;
    }else if(ginter == ggremio){
        empates++;
    }

    printf("Novo grenal (1-sim 2-nao)\n");
    
    while(1){
        
        scanf("%d", &option);
        
        if(option == 1){
            grenais++;
            scanf("%d %d", &ginter, &ggremio);
            if(ginter > ggremio){
                vinter++;
            }else if(ginter < ggremio){
                vgremio++;
            }else if(ginter == ggremio){
                empates++;
            }
            printf("Novo grenal (1-sim 2-nao)\n");
        }else if(option == 2){
            break;
        }else{
            printf("Novo grenal (1-sim 2-nao)\n");
        }
        
    }

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", vinter);
    printf("Gremio:%d\n", vgremio);
    printf("Empates:%d\n", empates);

    if(vinter > vgremio){
        printf("Inter venceu mais\n");
    }else if(vinter < vgremio){
        printf("Gremio venceu mais\n");
    }

    return 0;
}