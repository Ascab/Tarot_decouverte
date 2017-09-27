/*========= Validation du coups : 0 valide 1 sinon========*/

int verif_coup (CARTE J1, CARTE J2, CARTE mainJ2[3][12])
{
	if (J1.typeC == COULEUR)	
		entame_couleur(J1, J2, mainJ2);
	else
		entame_atout(J1, J2, mainJ2);
}
int entame_couleur (CARTE J1, CARTE J2, CARTE mainJ2[3][12])
{	
	switch J2.typeC
	{
		case  CLASSIC: 
			if (J1.carteC.couleur == J2.carteC.couleur)
				return 0
			else
			return  verif_couleur_main (mainJ2, J1.carteC.couleur)*verif_atout_main(excuse, mainJ2);  
			
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
			if (J2.carteA,valA > J1.carteA.valA)
				return 0
			else
			return  verif_atout_main(J1.carteA.valA, mainJ2);
			break;
		case CLASSIC:
			return verif_atout_main(excuse , mainJ2);
			break;
	}
}
int verif_couleur_main(CARTE mainJ2[3][12], COULEURC couleurJ1)
{
	int i, j, nb_valide;
	
        for (i = 1 ; i >= 0 ; i--)
	 {
		 for ( j = 0 ; j < 12 ; j++)
		 {
			if ((mainJ2[i][j].typeC == CLASSIC) && (mainJ2[i][j].carteC.couleur == couleurJ1) )
				nb_valide++;
		 }
	 }
	 return nb_valide ;
}
int verif_atout_main(VALA ValA, CARTE mainJ2[3][12])
{
	int i, j, nb_valide; 

	for (i =1 ; i >= 0 ; i--)
	{
		for (j = 0 ; j < 12 ; j++)
			{
				if ((mainJ2[i][j].typeC == ATOUT) && (mainJ2[i][j].carteA.valA >= ValA))
					nb_valide++;
			}
	}
	return nb_valide
}

/*=========== Determination du gagnant d'un pli ============*/

int gagnant_pli(CARTE J1, CARTE J2, int entameJ)
{
	switch J1.typeC
	{
		case CLASSIC :
			switch J2.typeC
			{
				case CLASSIC : 
					if ((J1.carteC.valC > J2.carteC.valC) || (J1.carteC.couleur != J2.carteC.couleur))
						return entameJ; //Pas de changement de "premier joueur"
					else 
						return (entameJ++)%2;
					break;
				case ATOUT : 
					return (entameJ++)%2;
			}
		case ATOUT : 
			switch J2.typeC
			{
				case CLASSIC : 
					return entameJ;
					break;
				case ATOUT 
					if (J1.carteA.valA > J2.carteA.valA)
						return entameJ;
					else 
						return (entameJ++)%2
					break;
			}
	}
}
