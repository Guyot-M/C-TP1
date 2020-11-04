#include <stdio.h>

int main()
{
    int bin = 1024;

    for(int i = 16; i >= 0; i--)
        printf("%d ",(bin >> i)&1);
    printf("\n");
    
	return 0;
}
