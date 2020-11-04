#include <stdio.h>
int main() {
  printf("--------------Signed---------------\n");
  printf("char %ld\n", sizeof(char));
  printf("short %ld\n", sizeof(short));
  printf("int %ld\n", sizeof(int));
  printf("long int %ld\n", sizeof(long int));
  printf("long long int %ld\n", sizeof(long long int));
  printf("float %ld\n", sizeof(float));
  double d;
  printf("double %ld\n", sizeof(d));
  long double ld;
  printf("long double %ld\n\n", sizeof(ld));

  printf("--------------Unsigned---------------\n");
  printf("unsigned char %ld\n", sizeof(unsigned char));
  printf("unsigned short %ld\n", sizeof(unsigned short));
  printf("unsigned int %ld\n", sizeof(unsigned int));
  printf("unsigned long int %ld\n", sizeof(unsigned long int));
  printf("unsigned long long int %ld\n", sizeof(unsigned long long int));

  return (0);
}