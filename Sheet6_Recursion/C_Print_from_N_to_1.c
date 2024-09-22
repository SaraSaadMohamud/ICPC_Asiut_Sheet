#include <stdio.h>
#include <stdlib.h>

void Print_Numbers(int Number);

int main()
{
   int Num=0;

   scanf("%i",&Num);
   Print_Numbers(Num);

    return 0;
}
void Print_Numbers(int Number)
{
    if(Number == 1)
    {
        printf("%i",Number);
    }
    else
    {
        printf("%i ",Number);
    }
    Number--;

    if(Number>0)
    {
        Print_Numbers(Number);
    }
}
