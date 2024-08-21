#include <stdio.h>
#include <stdlib.h>

int Number;
char Array[100];
int Count=0;

int Odd_Number(int Number);
void Check_Fun(char Array[],unsigned int Lenght);

int main()
{
    scanf("%i",&Number);
    int Result=Odd_Number(Number);
    if(Result == 0)
    {
        printf("NO");
        return(0);
    }
    Check_Fun(Array,Count);
    return 0;
}
int Odd_Number(int Number)
{
    if(Number%2 !=0)
    {
        for(int j=Number ; j>0 ; j/=2)
        {
            Array[Count]=j%2;
            Count++;
        }
        return(1);
    }
    else
    {
        return(0);
    }
}
void Check_Fun(char Array[],unsigned int Lenght)
{
    int j=Lenght-1;
    int k=0;
    for(int i=0 ; i<Lenght ; i++)
    {
        if(Array[i] != Array[j])
        {
           printf("NO");
           return(0);
        }
        else
        {
             if(j>=0)
                j--;
        }
    }
    printf("YES");
}
