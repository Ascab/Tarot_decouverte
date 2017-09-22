typedef enum val_classic{1,2,3,4,5,6,7,8,9,10,valet,cavalier,dame,roi} VALC;
typedef enum val_atout{excuse,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21} VALA;
typedef enum type  {ATOUT,CLASSIC} TYPE;
typedef enum couleurC {trefle,coeur,pique,carreau} COULEURC;

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


