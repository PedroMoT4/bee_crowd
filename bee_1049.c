#include <stdio.h>
#include <string.h>
int main(){
    char str[15], cls[15], diet[15];

    fgets(str, 15, stdin);
    fgets(cls, 15, stdin);
    fgets(diet, 15, stdin);

    str[strcspn(str, "\n")] = 0;
    cls[strcspn(cls, "\n")] = 0;
    diet[strcspn(diet, "\n")] = 0;

    if(strcmp(str, "vertebrado") == 0){
        if(strcmp(cls, "ave") == 0){
            if(strcmp(diet, "carnivoro") == 0){
                printf("aguia\n");
            }else if(strcmp(diet, "onivoro") == 0){
                printf("pomba\n");
            }
        }else if(strcmp(cls, "mamifero") == 0){
            if(strcmp(diet, "onivoro") == 0){
                printf("homem\n");
            }else if(strcmp(diet, "herbivoro") == 0){
                printf("vaca\n");
            }
        }
    }else if(strcmp(str, "invertebrado") == 0){
        if(strcmp(cls, "inseto") == 0){
            if(strcmp(diet, "hematofago") == 0){
                printf("pulga\n");
            }else if(strcmp(diet, "herbivoro") == 0){
                printf("lagarta\n");
            }
        }
        if(strcmp(cls, "anelideo") == 0){
            if(strcmp(diet, "hematofago") == 0){
                printf("sanguessuga\n");
            }else if(strcmp(diet, "onivoro") == 0){
                printf("minhoca\n");
            }
        }
    }

    return 0;
}