#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lieu_s{
    char nom[20];
    char description[50];
    int difficulte;
    int id;
} lieu_t;


int main(){

    lieu_t Hiroshima = { "Hiroshima", "vous sentez le cancer se developper en vous.", 19, 1};

    lieu_t Auschwitz = { "Auschwitz", "vous venez poliment de refuser une douche.", 15, 2};

    lieu_t Pyongyang = { "Pyongyang", "Kim Jong-un est maintenant votre nouveau dieu.", 10, 3};

    char choix[20];
    int result;

    printf("voulez-vous aller en Hiroshima, Auschwitz ou a Pyongyang?\n");
    scanf("%s",choix);


     if (strcmp (choix, Hiroshima.nom) == 0){
        printf("Felicitation, vous avez atteint Hiroshima, %s\n", Hiroshima.description);
    }else if (strcmp (choix, Auschwitz.nom) == 0){
        printf("Felicitation, vous avez atteint la Auschwitz, %s\n", Auschwitz.description);
    }else if (strcmp (choix, Pyongyang.nom) == 0){
        printf("Felicitation, vous avez atteint Pyongyang, %s\n", Pyongyang.description);
    }

    return 0;
}
