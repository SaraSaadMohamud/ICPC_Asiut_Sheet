#include <stdio.h>
#include <stdlib.h>
unsigned int Num1,Num2;char Operator1;
int main()
{
    scanf("%c%i%i",&Operator1,&Num1,&Num2);
    if(Operator1=='+')
        printf("%i",Num1+Num2);
    else if(Operator1=='-')
        printf("%i",Num1-Num2);
    else if(Operator1=='*')
        printf("%i",Num1*Num2);
    else
        printf("%i",Num1/Num2);
    return 0;
}
