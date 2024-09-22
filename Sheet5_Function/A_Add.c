#include <stdio.h>
#include <stdlib.h>
int x;
int y;
long long Sum;
long long Get_Sum(int Num1,int Num2);
int main()
{
    scanf("%i %i",&x,&y);
    Sum=Get_Sum(x,y);
    printf("%lli",Sum);
    return 0;
}
long long Get_Sum(int Num1,int Num2)
{
    return(Num2+Num1);
}
