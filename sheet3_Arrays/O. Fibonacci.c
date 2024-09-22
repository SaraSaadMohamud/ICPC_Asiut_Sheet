#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long Start=0;
    long long Second =1;
    int Number=0;
    long long Result=0;
    scanf("%i",&Number);
       if((Number==1) )
       {
           Result=Start;
       }
       else if(Number == 2)
       {
           Result=Second;
       }
       {
           for(int Count=3 ; Count <=Number ;Count++)
           {
                Result=Start+Second;
                Start=Second;
                Second=Result;
           }
       }
        printf("%lli",Result);

    return 0;
}
