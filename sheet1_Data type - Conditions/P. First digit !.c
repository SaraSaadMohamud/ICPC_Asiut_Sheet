#include <stdio.h>
#include <stdlib.h>
unsigned int Number;
int main()
{
    scanf("%i",&Number);
    if(((Number/1000)%2)==0)
        printf("EVEN");
    else
        printf("ODD");
    return 0;
}
