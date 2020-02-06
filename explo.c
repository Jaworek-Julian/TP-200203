#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lieu_s{
    char nom[20];
    char description[50];
    int difficulte;
    int id;
    int lieuaccessible[4];
} lieu_t;

    lieu_t Hiroshima = { "Hiroshima", "vous sentez le cancer se developper en vous.", 19, 1 , {3, 2, 5}};
    lieu_t Auschwitz = { "Auschwitz", "vous venez poliment de refuser une douche.", 15, 2, {6, 5, 8}};
    lieu_t Pyongyang = { "Pyongyang", "Kim Jong-un est maintenant votre nouveau dieu.", 10, 3, {5, 0, 4}};
    lieu_t Seoul = { "Seoul", "Vous êtes maintenant connecte a la 5g", 5, 4, {1, 0, 6}};
    lieu_t Tokyo = { "Tokyo", "Vous avez attrapé le Corona-virus", 14, 5, {9, 6, 3}};
    lieu_t NewYork = { "NewYork", "Vous avez pris 50kg", 8, 6, {9, 7, 2}};
    lieu_t Aglerie = { "Aglerie", "Vous etes pousuivis a cause du jambon qui sort de votre poche", 17, 7, {3, 8, 9}};
    lieu_t Russie = { "Russie", "Vous etes maintenant addictes a l'alcool", 7, 8, {7, 1, 9}};
    lieu_t Paris = { "Paris", "Vous vous êtes fait vole vos affaire", 7, 8, {7, 1, 9}};


int main(){

    int lieu[10];
    int position = 0;



    for (int i = 0; i<10; i++){
        lieu[i] = i;
    }




    char choix[20];
    int result;

    printf("voulez-vous aller en Hiroshima, Auschwitz ou a Pyongyang?\n");
    scanf("%s",choix);




     if (strcmp (choix, Hiroshima.nom) == 0){
        printf("Felicitation, vous avez atteint Hiroshima, %s\n", Hiroshima.description);
        position = 1;
    }else if (strcmp (choix, Auschwitz.nom) == 0){
        printf("Felicitation, vous avez atteint la Auschwitz, %s\n", Auschwitz.description);
        position = 2;
    }else if (strcmp (choix, Pyongyang.nom) == 0){
        printf("Felicitation, vous avez atteint Pyongyang, %s\n", Pyongyang.description);
        position = 3;
    }

    printf("ou desirez vous aller?\n");
    scanf("%d", choix);


    return 0;
}
