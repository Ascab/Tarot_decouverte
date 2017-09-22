int verif_coup (CARTE J1, CARTE J2, CARTE* mainJ2)
{
	
}
int entame_couleur (CARTE J1, CARTE J2)
{	
	switch J2.typeC
	{
		case  CLASSIC: 
			return verif_couleur(J1.carteC.couleur, J2.carteC.couleur) + verif_couleur_main (mainJ2, J1.carteC.couleur)*;  
			/*verif couleur renvoi 0 si meme couleur 1 sinon
			verif_couleur_main renvoie 0 si il a meme couleur en main */
			break;
		case ATOUT: 
			return verif_couleur_main(mainJ2, J1.carteC.couleur);
		break;
	}

}
int entame_atout (CARTE J1, CARTE J2, CARTE* mainJ2)
{
	switch J2.typeC
	{
		case ATOUT:
			return verif_monte_atout(J1.carteA.valA, J2.carteA.valA) * verif_atout_main(J1.carteA.valA, mainJ2);
			break;
			/*monte atout retourne 0 si J2 monte 1 sinon 
			  atout main retourne  0 si J2 ne possede pas atout superieur 1 sinon */
		case CLASSIC:
			return verif_atout_main(excuse , mainJ2);
			break;
	}
}
int verif_couleur(COULEURC couleur1, COULEURC couleur2)
{	
	if ((int)couleur1 =(int) couleur2)
		return 0;
	else 
		return 1;
}
int verif_couleur_main(CARTE mainJ1[3][12], COULEURC couleur)
{
	 
