#include <stdio.h>
#include <stdlib.h>
float Num1,Num2;
int main()
{
    scanf("%f%f",&Num1,&Num2);
    if((Num1==0)&&(Num2==0))
        printf("Origem");
    else if((Num1>0)&&(Num2>0))
        printf("Q1");
    else if((Num1>0)&&(Num2<0))
        printf("Q4");
    else if((Num1<0)&&(Num2<0))
        printf("Q3");
    else if((Num1<0)&&(Num2>0))
        printf("Q2");
    else if((Num1==0)&&(Num2!=0))
        printf("Eixo Y");
    else if((Num1!=0)&&(Num2==0))
        printf("Eixo X");
    return 0;
}
