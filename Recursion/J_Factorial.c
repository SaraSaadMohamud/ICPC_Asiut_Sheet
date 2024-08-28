#include <stdio.h>
#include <stdlib.h>
long long Get_Factorial(int Num);

int main()
{
    int Number;
    scanf("%i",&Number);

    long long Result =Get_Factorial(Number);
    printf("%lli",Result);

    return 0;
}

long long Get_Factorial(int Num)
{
    if (Num == 0)
    {
        return(1);
    }
    else
    {
        return(Num*Get_Factorial(Num-1));
    }
}
