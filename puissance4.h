#ifndef PUISSANCE4_H
 #define PUISSANCE4_H
 void afficherRegles(void);//y aura pas de retour
 int colonneValide(int colonne);//type de retour:int
 int demanderColonne(void);//type de retour:int
 int changerJoueur(int joueur);//type de retour:int
 void jouerPrototype(void);//y aura pas de retour
 int colonneValide(int colonne);
 int demanderColonne(void);
 int changerJoueur(int joueur);
 void jouerPrototype(void);
#endif
//pourquoi afficherRegles ne reçoit aucun paramètre et ne renvoie aucune valeur:afficherRegles() ne prend aucun parametre car les regles sont deja definies dans le programme. Elle ne retourne rien (void) car elle sert simplement a afficher les regles a l'ecran avec des prinf
