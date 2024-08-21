#include <stdio.h>
#include <stdlib.h>
#include "math.h"
long long Get_Result_of_Equation(int Num,int Size);
int main()
{
    int Index;
    int Number;

    scanf("%i %i",&Number,&Index);
    printf("%lli",Get_Result_of_Equation(Number,Index));
    return 0;
}
long long Get_Result_of_Equation(int Num,int Size)
{
    long long Result=1;
    long long Sum=0;

    for(int i=2 ; i<=Size ; i+=2)
    {
        for(int j=1 ; j<=i ; j++)
        {
            Result= Result*Num;
        }
        Sum+=Result;
        Result=1;
    }
    return(Sum);
}
