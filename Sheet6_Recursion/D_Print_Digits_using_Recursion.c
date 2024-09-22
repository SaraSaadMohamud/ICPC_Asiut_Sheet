#include <stdio.h>
#include <stdlib.h>

void Print_Digits(int Num);

int main()
{
    int Number=0;

    scanf("%i",&Number);
    Print_Digits(Number);

    return 0;
}

void Print_Digits(int Num)
{
    unsigned int Value=0;
    unsigned int size=sizeof(unsigned int);
    char Arr[size];
    unsigned  Count=0;

    scanf("%i",&Value);

    for(int i=Value ; i>0 ; i/=10)
    {
        Arr[Count]= i%10;
        Count++;
    }
    for(int i=Count-1 ; i>=0 ; i--)
    {
       printf("%i ",Arr[i]);
    }
    if(Value == 0)
    {
        printf("0");
    }
    printf("\n");
    Num--;

    if(Num > 0)
    {
        Print_Digits(Num);
    }

}
