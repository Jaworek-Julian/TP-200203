#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char pay1[] = "Allemagne", pay2[] = "Norvege", choix[20];
    int result;

    printf("voulez-vous aller en Allemagne (1) ou en Norvege (2)?\n");
    scanf("%s",&choix);

    if (strcmp (choix, pay1) == 0){
        printf("Felicitation, vous avez atteint l'Allemagne\n");
    }else if (strcmp (choix, pay2) == 0){
        printf("Felicitation, vous avez atteint la Norvege\n");
    }
}
