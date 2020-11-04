#include <stdio.h>

int main()
{
	unsigned char op ='~';
	int num1 = 10;
	int num2 = 0;
	int res;

	//Affichage d'un calcule en fonction de l'opérateur choisie

	switch (op)
	{
		case '+':
			res= num1 + num2;
			printf("le resultat est : %i\n",res);
			break;
		case '-':
			res= num1 - num2;
			printf("le resultat est : %i\n",res);
			break;
		case '*':
			res= num1 * num2;
			printf("le resultat est : %i\n",res);
			break;
		case '/':
			res= num1 / num2;
			printf("le resultat est : %i\n",res);
			break;
		case '%':
			res= num1 % num2;
			printf("le resultat est : %i\n",res);
			break;
		case '|':
			res= num1 | num2;
			printf("le resultat est : %i\n",res);
			break;
		case '~':
			num1 = !num1;
			num2 = !num2;
			printf("le resultat est : %i, %i\n",num1,num2);
			break;	
		default:printf ("erreur !\n");	
	}
	
	return 0;
}
