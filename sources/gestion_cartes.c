#include "../headers/include.h"

void melange_carte ( CARTE TabC[78] )

	int i;
	CARTE stock;
	
	for(i=0;i<78;i++)
    {
        k=alea_int(78);
        stock=TabC[k];
        TabC[k]=TabC[i];
        TabC[i]=stock;
    }
}

void distribution_cartes ( CARTE TabC[78], CARTE j1[3][12], CARTE j2[3][12] ) 
{
	int i,j;
	for (i=0;i<3;i++)
	{
		for (j=0;j<12;j++)
		{
			j1[i][j]=TabC[12*i+j];
		}
	}
	for (i=0;i<3;i++)
	{
		for (j=0;j<12;j++)
		{
			j1[i][j]=TabC[12*i+j+36];
		}
	}	
}


