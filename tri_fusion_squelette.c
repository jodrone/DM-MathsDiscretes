#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


typedef struct t_liste
{
  int valeur;
  struct t_liste *suivant;
}liste;


liste *initialiser(double r, liste *l)
{
  //initialise la liste cha�n�e, vide par d�faut
  liste listeTemporaire;
  listeTemporaire.suivant = NULL;

}

void afficher(liste *l)
{
  liste *prout;
  prout = l;
  while (prout != NULL)
  {
	printf("Valeur : %d",l->valeur);
	prout = prout->suivant;
  }
  //affiche le contenu d'une liste

}

void supprimer_liste(liste *l)
{
  //lib�re la m�moire utilis�e par la liste
  //vous pouvez utiliser valgrind pour v�rifier que vous avez bien tout lib�r�

}

liste* separation(liste *l)
{
  //s�pare l en deux listes de m�me taille (+/- un �l�ment)
  //une de ces listes est retourn�e par la fonction, l'autre et la liste l modifi�e

}

liste* fusion(liste *l1, liste *l2)
{
  //fusionne les listes tri�es l1 et l2 en une seule retourn�e par la fonction

}

liste* tri_fusion(liste *l)
{
  /*
  //algorithme de tri fusion qui s�pare la liste en deux, tri r�cursivement chacune des listes et les fusionne
  liste liste2;
  
  //liste2 = initialise(

  liste2 = separation(liste);
  
  liste = tri_fusion(liste);
  liste2 = tri_fusion(liste2);


  return fusion(liste1,liste2);
  */	

}

int main (int argc, char *argv[])
{
  //initialisation du g�n�rateur de nombres al�atoires
  srand(time(NULL));
  //variables pour mesurer le temps
  long clk_tck = CLOCKS_PER_SEC;
  clock_t t1, t2;
  //heure avant le calcul
  t1 = clock();
  //le calcul dont on veut mesurer le temps
  //liste2 = tri_fusion(liste);
  //heure apr�s le calcul
  t2 = clock();
  (void)printf("Nb ticks/seconde = %ld,  Nb ticks depart : %ld, "
	       "Nb ticks final : %ld\n",
	       clk_tck, (long)t1, (long)t2);
  (void)printf("Temps consomme (s) : %lf \n",
	       (double)(t2-t1)/(double)clk_tck);

}
