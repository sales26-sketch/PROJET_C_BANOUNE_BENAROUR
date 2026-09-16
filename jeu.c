#include "puissance4.h"
#include <stdio.h>
void afficherRegles(void){
    printf("--------PUISSANCE4---------\n");
    printf("Alignez quatre jetons horizontalement, verticalement ou en diagonale.\n");
    printf("Les colonnes sont numerotees de 1 a 7.");
}
//Étape 4
int colonneValide(int colonne){
    return (colonne >= 1 && colonne <= 7);
}
//Étape 5
int demanderColonne(void){
    int colonne;
    printf("Choisissez une colonne 1-7 : ");
    scanf("%d", &colonne);
    while(colonneValide(colonne) == 0){
        printf("Colonne invalide. Choisissez une colonne (1-7) : ");
        scanf("%d", &colonne);
    }
    return colonne;
}
//Étape 6 
int changerJoueur(int joueur){
    if(joueur == 1){
        return 2;
    }
    else{
        return 1;
    }
}
void jouerPrototype(void) {
    int joueurCourant = 1;
    int i;

    for (i = 0; i < 6; i++) {
        printf("Tour du joueur %d\n", joueurCourant);

        int colonne = demanderColonne();

        printf("Le joueur %d choisit la colonne %d.\n",
               joueurCourant, colonne);

        joueurCourant = changerJoueur(joueurCourant);
    }
}