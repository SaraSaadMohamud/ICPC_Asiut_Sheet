#include <stdio.h>
#include <stdlib.h>
int Num1;long long Num2;char Name;float Num3;double Num5;
int main()
{
    scanf("%c%i%lli%f%lf",&Name,&Num1,&Num2,&Num3,&Num5);
    printf("%i\n%lli\n%c\n%0.2f\n%0.1lf",Num1,Num2,Name,Num3,Num5);
    return 0;
}
