#include <stdio.h>
#include <stdlib.h>
#include "math.h"
int Count;
void Prime_Fun(int i);
int main()
{
    scanf("%i",&Count);
    Prime_Fun(Count);
    return 0;
}
void Prime_Fun(int i)
{
    long long Num=0;
    while(i--)
    {
       scanf("%lli",&Num);
       int Var=sqrt(Num);
       if(Num==1)
       {
            printf("NO\n");
            continue;
       }
       int K=0;
       for(int i=2 ; i<=Var ; i++)
       {
           if(Num % i == 0)
           {
               K=1;
               printf("NO\n");
               break;
           }
       }
       if(K==0)
        printf("YES\n");
    }
}
