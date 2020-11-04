#include <stdio.h>

int main() {


    /*On utilise le modulo pour savoir si un nombre est divisible par un autre.*/

    printf("--- Divisible par 2 et 15 -----\n");
    int i;
    for (i=1;i<=1000;i++)
    {
        if(i%15==0 && i%2==0)
        {
            printf("%i\n",i);
        }
    }

    printf("\n--- Divisible par 103 ou 107 -----\n");
    for (i=1;i<=1000;i++)
    {
        if(i%103==0 || i%107==0)
        {
            printf("%i\n",i);
        }
    }

    printf("\n--- Divisible par 7 ou 5 mais pas 3 -----\n");
    for (i=1;i<=1000;i++)
    {
        if((i%7==0 || i%5==0) && i%3!=0)
        {
            printf("%i\n",i);
        }
    }

    return (0);
}