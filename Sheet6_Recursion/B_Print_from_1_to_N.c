#include <stdio.h>
#include <stdlib.h>

void Print_Numbers_Fun(void);
int Num_1=1;
int Count=0;

int main()
{
    scanf("%i",&Count);
    Print_Numbers_Fun();

    return 0;
}

void Print_Numbers_Fun(void)
{
    printf("%i\n",Num_1);
    Num_1++;
    if(Num_1 <= Count)
    {
        Print_Numbers_Fun();
    }
}
