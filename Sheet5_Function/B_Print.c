#include <stdio.h>
#include <stdlib.h>
void Print_Fun(void);
int main()
{
    Print_Fun();
    return 0;
}
void Print_Fun(void)
{
    int Number;
    scanf("%i",&Number);
    for(int i=1 ; i<Number ; i++)
    {
        printf("%i ",i);
    }
    printf("%i",Number);
}
