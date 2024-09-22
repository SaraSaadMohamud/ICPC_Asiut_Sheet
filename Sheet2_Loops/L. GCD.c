#include <stdio.h>
short Number1,Number2;
int flag,Result;
int main()
{
    scanf("%i %i",&Number1,&Number2);
    if(Number1>Number2)
        flag=Number2;
    else
       flag=Number1;
    for(int i=1;i<=flag;i++)
    {
        if((Number1%i==0)&&(Number2%i==0))
           Result=i;
    }
    printf("%i",Result);
    return 0;
}
