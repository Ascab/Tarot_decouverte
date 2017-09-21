#include "graphics.h"
 
 typedef enum {as=1,deuxC,troisC,quatreC,cinqC,sixC,septC,huitC,neufC,dixC,valetC,cavalierC,dameC,roiC} VALC;
 typedef enum {excuse,unA,deuxA,troisA,quatreA,cinqA,sixA,septA,huitA,neufA,dixA,onzeA,douzeA,treizeA,quatorzeA,quinzeA,seizeA,dixseptA,dixhuitA, dixneufA,vingtA,vingtunA } VALA;
 typedef enum  {ATOUT,CLASSIC} TYPE;
 typedef enum  {trefle,coeur,pique,carreau} COULEURC;
  
 typedef struct
 {
          VALC valC;
          COULEURC couleur;
  }CARTEC;
  
  typedef struct
  {
          VALA valA;
  }CARTEA;
  
  typedef struct
  {
          TYPE typeC;
          union
          {
                  CARTEC carteC;
                  CARTEA carteA;
          };
  }CARTE; 

int init_cartes (CARTE *tabC)
{
         COULEURC couleur;
         TYPE typeC;
         VALA valA;
         VALC valC;
         int k=0;
 
         for (couleur = trefle ; couleur <= carreau ; couleur++)
         {       
                 tabC[k].typeC = CLASSIC;
                 for (valC  = as  ; valC <= roiC  ; valC++)
                 {
                         tabC[k].carteC.couleur = couleur ;
                         tabC[k].carteC.valC = valC;
                         printf("%d : %d\n", tabC[k].carteC.couleur, tabC[k].carteC.valC);
                         k++;
                 }
         }
         for (valA = excuse ; valA <= vingtunA ; valA++)
         {
                 tabC[k].typeC= ATOUT;
                 tabC[k].carteA.valA = valA;
                 printf("ATOUT %d\n", tabC[k].carteA.valA);
                 k++;
         }
         return 0;
}
int main ()
{
	CARTE tabC[78];
	init_cartes(tabC);
	return 0;
}
  
