#include <stdio.h>

int main() {
  int a = 0;
  int b = 3;

  printf("--------------Opérateur Arithmétiques---------------\n");
  printf("a + b = %i \n",a + b);
  printf("a - b = %i \n",a - b);
  printf("a * b = %i \n",a * b);
  printf("a / b = %d \n",a / b);
  printf("a mod b = %i \n",a % b);

  printf("--------------Opérateur Logique---------------\n");
  printf("non a = %i \n",!a);
  printf("a et b = %i \n",a && b);
  printf("a ou b = %i \n",a || b);

  return (0);
}