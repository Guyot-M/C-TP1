#include <stdio.h>

int main()
{
    //Nombre à afficher en binaire
    int bin = 1024;

    //Décalage du 16 bit au dernier bit et affichage de sa valeur
    for(int i = 16; i >= 0; i--)
        printf("%d ",(bin >> i)&1);
    printf("\n");
    
	return 0;
}
