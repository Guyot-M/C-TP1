#include <stdio.h>
#define Pi 3.1415927
int main() {
  float rayon = 10.5;
  float aire = Pi*rayon*rayon;
  float perimettre = 2*Pi*rayon;
  printf("L'aire du cercle est de : %f\n", aire);
  printf("Le perimettre du cercle est de : %f\n", perimettre);
  return (0);
}