#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**************************************************************************/
/*                                                                        */
/*               LAURENT CAUCHY - ASSOCIATION AFRI'CAN                    */
/*           Début des cours en langage c le 21 avril  2023               */
/*                     Voici un premier programme                         */
/*                   que ja vais essayer d'améliorer                      */
/*                         au fil du temps                                */
/*                 lors de mon initiation au langage c                    */
/*                                                                        */
/**************************************************************************/

// DECLARATION DE FONCTIONS ...........................................
void fois3(int *adresse);
void div2(int *adresse1);


// Début de la fonction Principale ........................................

int	main(int argc, char *argv[])

{
	// DECLARATION DES VARIABLES .....................................
	const int A = 0;
	int a, b, c, d, resultat1, n, i;
	double x, y, z, resultat2;
	int *pointeur = &a;

	// INITIALISATION DES VARIABLES ..................................
	a = 1;
	b = 2;
	c = 3;
	d = 4;
	x = 1.234;
	y = 2.345;
	z = 3.456;
	
	printf(" \n");
	printf("petit programme pour indiquer les valeurs de mes variables:\n");
	printf (" \n");
	printf("voici la valeur de ma constante A: %d\n", A);
	printf("\n");
	printf("liste et valeurs de mes variables initiales a, b, c et d\n");
    	printf ("\n");	
	printf("la valeur %d est celle de ma 1ere variable a\n", a);
	printf("la valeur %d est celle de ma 2eme variable b\n", b);
	printf("la valeur %d est celle de ma 3eme variable c\n", c);
	printf("la valeur %d est celle de ma 4eme variable d\n", d);
	printf(" \n");
	printf("liste et valeurs de mes floats initiaux x, y et z:\n");
	printf("\n");
	printf("voici %f la valeur de mon 1er float x\n", x);
	printf("voici %f la valeur de mon 2eme float y\n", y);
	printf("voici %f la valeur de mon 3eme float z\n\n", z);
	printf("Bon, maintenant on va saisir de nouvelles variables:\n");
	
/**** printf("Entrez a:");
		while(a != 59)
		{
		printf("(valeur de a %d)\n",a);
		scanf("%d" , &a);
		}
			if(a > 32767)
			{
			printf("trop grand pour un int connard. Bye ...\n");
			return(0);
			}
****/


	// ESSAIS SUR LES POINTEURS ...............................
	printf("Entrez a:");
	scanf("%d" , &a);
	printf("voici la valeur de a:%d\n", a);
	printf("voici l'adresse de a en Hexa:%p\n", &a);
	printf("voici l'adresse de a en decimal:%d\n", &a);;
	printf("voici la valeur du pointeur:%d\n", pointeur);
	printf("Et voila ce qu'il y a a l'adresse du pointeur:%d\n", *pointeur);
	fois3(&a); 
	printf("Et voila sa valeur multipliée par 3:%d\n", *pointeur);
	div2(&a);
	printf("puis cette valeur divisée par 2:%d\n", *pointeur);

	printf("Entrez b:");
	scanf("%d", &b);
	printf("Entrez x:");
	scanf("%lf", &x);
	printf("Entrez y:");
	scanf("%lf", &y);

	// RESULTAT MULTIPLICATION  ................................
	resultat1 = a * b;
	resultat2 = x * y;
	printf("voici le resultat de a * b: %d\n", resultat1);
	printf("voici le resultat de x * y: %f\n\n\n\n", resultat2);
	
	// RESULTAT DIVISION ......................................
	resultat1 = a / b;
	resultat2 = x / y;
	printf("voici le resultat de a / b: %d\n", resultat1);
	printf("voici le resultat de x / y: %f\n\n\n\n", resultat2);

	// BOUCLE DE LIGNES POINTILLEES  N FOIS ...............
	printf("Boucle de lignes pointillées n fois\n");
	printf("entrez le nombre n:");
	scanf("%d", &n);
		for (i = 0 ; i < n ; i++)
			{
			printf("%d.............................................................................\n", i);
			}

	return(0); // renvoie le nombre 0 et s'arrête


} 

// fin de la fonction principale.....................................



// FONCTION MULTIPLIER PAR 3 ......................................
void fois3(int *adresse)
{
*adresse = *adresse * 3;
}


// FONCTION DIVISER PAR 2 .........................................
void div2(int *adresse1)
{
*adresse1 = *adresse1 / 2;
}

