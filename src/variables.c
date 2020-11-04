#include <stdio.h>
int main() {

    char c = 'a';
    short s = 1;
    int i = 10;
    long int li = 1000;
    long long int lli = 100000;
    float f = 1.055;
    double d = 266.502;
    long double ld = 151516.321561;

    unsigned char uc = 'a';
    unsigned short us = 1;
    unsigned int ui = 10;
    unsigned long int uli = 1000;
    unsigned long long int ulli = 100000;

    //Affichage de valeur de varibale signé
    printf("--------------Signed---------------\n");
    printf("char %c\n", c);
    printf("short %d\n", s);
    printf("int %i\n", i);
    printf("long int %li\n", li);
    printf("long long int %lli\n", lli);
    printf("float %f\n", f);
    printf("double %f\n",  d);
    printf("long double %Lf\n\n", ld); 

    //Affichage de valeur de varibale non signé
    printf("--------------Unsigned---------------\n");
    printf("unsigned char %c\n", uc);
    printf("unsigned short %d\n", us);
    printf("unsigned int %i\n", ui);
    printf("unsigned long int %li\n", uli);
    printf("unsigned long long int %lli\n", ulli);

  return (0);
}