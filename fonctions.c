#include "fonctions.h"
#include <stdio.h>

int max(int a,int b){
  int max = a;
  //Si b est plus grand que a
  if(b>max)
    max = b;

  return max;
}

void afficherTableau(int *data,int size){
    for(int i = 0;i<size;i++){
      printf(" %d ",data[i]);
    }
    printf("\n");
}

void afficherNom(Personne *p){
  //Afficher le nom de la personne
  printf("Nom de la personne : %s\n",p->nom);
}

/* Retourne 1 si non trouvé et 0 si trouvé */
int listeAEntier(liste data,int number){
  int toReturn = 1;

  //Parcourir tant qu'on a pas atteint la fin et qu'on a pas trouvé le nombre
  struct cellule *currentPointer = data;
  while(currentPointer != NULL && toReturn != 0){
    //Si on trouve la valeur
    if(currentPointer->valeur == number)
      toReturn = 0;

    //Avancer d'une case
    currentPointer = currentPointer->suiv;
  }

  return toReturn;
}

/* Retourne 1 si non égales et 0 si égales */
int listeEgales(liste data1,liste data2){
  int toReturn = 0;

  //Parcourir les 2 listes tant que on a pas atteint la fin ou trouvé de différences
  struct cellule *currentPointerFirst = data1;
  struct cellule *currentPointerSecond = data2;
  while(currentPointerFirst != NULL && currentPointerSecond != NULL && toReturn != 1){
    //Si les valeurs sont différentes
    if(currentPointerFirst->valeur != currentPointerSecond->valeur)
      toReturn = 1;

    //Avancer d'une case
    currentPointerFirst = currentPointerFirst->suiv;
    currentPointerSecond = currentPointerSecond->suiv;
  }

  //Si les deux listes sont de tailles différentes
  if(currentPointerFirst != currentPointerSecond)
    toReturn = 1;


  return toReturn;
}

int nombreNoeud(int step){
  int toReturn = 1;

  //Cas de base (step=1)
  if(step > 1){
    //On multiplie par 2 le nombre de braches
    toReturn = 2 * nombreNoeud(step-1);
  }

  return toReturn;
}
