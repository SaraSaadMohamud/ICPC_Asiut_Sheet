#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Number,Max,count=0,Result=0,Decimal=0;
int main()
{
    scanf("%i",&Max);
    while(Max)
    {
        scanf("%i",&Number);
        for(int k = Number ; k>0 ; k/=2)
        {
            if(k%2==1)
            {
                 Decimal++;
            }
        }
         for(int j = 0; j < Decimal ; j++ )
        {
            Result = ( Result + pow(2,j));
        }
        printf("%i\n",Result);
        count=0;
        Decimal=0;
        Result  = 0;
        Max--;
    }
    return 0;
}

