#include <stdio.h>
#include <stdlib.h>

int main(){
    int choix;

    printf("voulez-vous aller en Allemagne (1) ou en Norvege (2)?\n");
    scanf("%d",&choix);

    if (choix == 1){
        printf("felicitation, vous avez atteint l'Allemagne");
    }else if (choix == 2){
        printf("felicitation, vous avez atteint la Norvege");
    }
}
