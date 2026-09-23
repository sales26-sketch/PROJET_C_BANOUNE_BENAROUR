#ifndef PUISSANCE4_H
 #define PUISSANCE4_H
 #define NB_LIGNES 6
#define NB_COLONNES 7
#define VIDE 0
 void afficherRegles(void);//y aura pas de retour
 int colonneValide(int colonne);//type de retour:int
 int demanderColonne(void);//type de retour:int
void changerJoueur(int *joueur);
 void jouerPrototype(void);//y aura pas de retour
 int colonneValide(int colonne);
 int demanderColonne(void);
void changerJoueur(int *joueur);
 void jouerPrototype(void);
 void jouerTour(int *joueurCourant,int *nombreCoups);
 void initialiserGrille(int grille[NB_LIGNES][NB_COLONNES]);
 void afficherGrille(int grille[NB_LIGNES][NB_COLONNES]);
#endif