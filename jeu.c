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
void changerJoueur(int *joueur){
    if(*joueur == 1){
        *joueur= 2;
    }
    else{
        *joueur= 1;
    }
}
void jouerTour(int *joueurCourant,int *nombreCoups){
printf("TOUR du joueur %d\n",*joueurCourant);
int colonne = demanderColonne();
printf("Le joueur %d choisit la colonne  %d.\n",*joueurCourant,colonne);
(*nombreCoups)++;
changerJoueur(joueurCourant);
}
void jouerPrototype(void) {
    int grille[NB_LIGNES][NB_COLONNES];
    initialiserGrille(grille);
    int joueurCourant = 1;
    int nombreCoups=0;
while(nombreCoups<6){
    jouerTour(&joueurCourant,&nombreCoups);
}
printf("Nombre de coups joues : %d\n",nombreCoups);
afficherGrille(grille);
}
void initialiserGrille(int grille[NB_LIGNES][NB_COLONNES])
{
    for (int i = 0; i < NB_LIGNES; i++)
    {
       for (int j = 0; j < NB_COLONNES; j++)
       {
         grille[i][j]=VIDE;
       }
       
    }
}
void afficherGrille(int grille[NB_LIGNES][NB_COLONNES])
{
    char c;

    for (int i = 0; i < NB_LIGNES; i++)
    {
        printf("| ");

        for (int j = 0; j < NB_COLONNES; j++)
        {
            if (grille[i][j] == 0)
            {
                c = '.';
            }
            else if (grille[i][j] == 1)
            {
                c = 'X';
            }
            else if (grille[i][j] == 2)
            {
                c = 'O';
            }

            printf("%c ", c);
        }

        printf("|\n");
    }

    printf("+---------------+\n");
    printf("  1 2 3 4 5 6 7\n");
}