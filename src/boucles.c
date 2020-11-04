#include <stdio.h>

int main() {

/***Triangle avec un for***/

// int compter = 102;

// int i, j,h;
// printf("*\n");
// for (i=1;i<compter-1;i++)
// {
//     printf("*");
//     for (j=1;j<i;j++){
//         printf("#");
//     }
//     printf("*");
//     printf("\n");
// }
// for (i=0;i<compter;i++)
// {
//     printf("*");
// }
// printf("\n");

/***Triangle avec un while***/

//Nombre de lignes
int compter = 5;
int i=1; 
  //Premier ligne
  printf("*\n");
    //Tant que i est plus petit quele nombre de ligne voulu (-1 car ligne 1 déjà print)
    while (i<compter-1)
    {
      //On affiche la ligne suivante
      printf("*");
      int j=1;
      //On affiche des # au nombre de : numero de la ligne - 2
      while (j<i){
          printf("#");
          j++;
      }
      printf("*");
      printf("\n");
      i++;
    }
    // Pour la dernière ligne mettre autant détoile que le nombre de ligne
    for (i=0;i<compter;i++)
    {
        printf("*");
    }
    printf("\n");
  return (0);
}