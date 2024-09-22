#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int Get_Max_Value(int Arr[],int len);
int Get_Min_Value(int Arr[],int len);
int Get_Prime_Number(int Arr[],int len);
int Get_Palindrome_Number(int Arr[],int len);
int Get_Maximum_Number_of_Divisors(int Arr[],int len);

int main()
{
    int index=0;
    scanf("%i",&index);

    int Array[index];
    for(int i=0 ; i<index ; i++)
    {
        scanf("%i",&Array[i]);
    }

    printf("The maximum number : %i\n",Get_Max_Value(Array,index));
    printf("The minimum number : %i\n",Get_Min_Value(Array,index));
    printf("The number of prime numbers : %i\n",Get_Prime_Number(Array,index));
    printf("The number of palindrome numbers : %i\n",Get_Palindrome_Number(Array,index));
    printf("The number that has the maximum number of divisors : %i\n",Array[Get_Maximum_Number_of_Divisors(Array,index)]);

    return 0;
}
//////////////////////////////////////////////////////////////
int Get_Max_Value(int Arr[],int len)
{
    int Max=-2147483647 ;
    for(int i=0 ; i<len ; i++)
    {
        if(Arr[i]>Max)
        {
            Max = Arr[i];
        }
    }
    return(Max);
}
////////////////////////////////////////////////////////
int Get_Min_Value(int Arr[],int len)
{
    int Min=2147483646;
    for(int i=0 ; i<len ; i++)
    {
        if(Arr[i]<Min)
        {
            Min = Arr[i];
        }
    }
    return(Min);
}
//////////////////////////////////////////////////////////
int Get_Prime_Number(int Arr[],int len)
{
    int Count=0;
    int Result=0;
    int Flag=0;
    for(int i=0 ; i<len ; i++)
    {
        Flag=0;
        Count=Arr[i];
        if(Count==1)
        {
            Flag=1;
        }
        for(int j=2 ; j<Count ; j++)
        {
            if(Count % j == 0)
            {
                Flag=1;
                break;
            }
        }
        if(Flag == 0)
        {
            Result++;
        }
    }
    return(Result);
}
/////////////////////////////////////////////////////////////////
int Get_Palindrome_Number(int Arr[],int len)
{
    int Result=0;

    for(int i=0 ; i<len ; i++)
    {
        if(Arr[i]<10)
        {
            Result++;
        }
        else
        {
            if((Arr[i]%10) == (Arr[i]/10))
            {
                Result++;
            }
        }
    }
    return(Result);
}
/////////////////////////////////////////////////////////////////
int Get_Maximum_Number_of_Divisors(int Arr[],int len)
{
    int Max=0;
    int index=0;
    int Result=0;
    for(int i=0 ; i<len ; i++)
    {
        for(int j=1 ; j<= Arr[i] ; j++)
        {
            if (Arr[i] % j == 0)
            {
                Max++;
            }
        }
        if(Max > Result)
        {
             Result = Max;
             index  = i;
        }
        else if (Max == Result)
        {
            if(Arr[index] < Arr[i])
            {
                index = i;
            }
        }
        Max=0;

    }
    return(index);
}
