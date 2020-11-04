#include <stdio.h>

int main() {

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


int compter = 5;
int i=1; 
  printf("*\n");
    while (i<compter-1)
    {
        printf("*");
        int j=1;
        while (j<i){
            printf("#");
            j++;
        }
        printf("*");
        printf("\n");
        i++;
    }
    for (i=0;i<compter;i++)
    {
        printf("*");
    }
    printf("\n");
  return (0);
}