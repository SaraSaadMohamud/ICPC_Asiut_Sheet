#include <stdio.h>
#include <stdlib.h>
long long Num1,Num2,Num3;
int main()
{
    scanf("%lli%lli%lli",&Num1,&Num2,&Num3);
    if((Num1>=Num2)&&(Num1>=Num3))
    {
        if(Num2>Num3)
            printf("%lli %lli",Num3,Num1);
        else
            printf("%lli %lli",Num2,Num1);
    }
    else if((Num2>=Num1)&&(Num2>=Num3))
    {
        if(Num1>Num3)
            printf("%lli %lli",Num3,Num2);
        else
            printf("%lli %lli",Num1,Num2);
    }
    else
    {
        if(Num1>Num2)
            printf("%lli %lli",Num2,Num3);
        else
            printf("%lli %lli",Num1,Num3);
    }
    return 0;
}
