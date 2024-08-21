#include <stdio.h>
#include <stdlib.h>
int Num1;
int Num2;
void Swap_Fun(int Num1,int Num2);
int main()
{
    scanf("%i %i",&Num1 ,&Num2);
    Swap_Fun(Num1,Num2);
    return 0;
}
void Swap_Fun(int Num_1,int Num_2)
{
    int Temp;
    Temp=Num_1;
    Num_1=Num_2;
    Num_2=Temp;
    printf("%i %i",Num_1,Num_2);
}
