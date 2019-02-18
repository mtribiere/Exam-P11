#ifndef FONCTIONS
#define FONCTIONS

typedef struct personne{

  int id;
  char *nom;
  char *prenom;

}Personne;

struct cellule{
  int valeur;
  struct cellule* suiv;
};
typedef struct cellule *liste;

int max(int a,int b);
void afficherTableau(int *data,int size);
void afficherNom(Personne *p);
int listeAEntier(liste data,int number);
int listeEgales(liste data1,liste data2);
int nombreNoeud(int step);



#endif /* end of include guard: FONCTIONS */
