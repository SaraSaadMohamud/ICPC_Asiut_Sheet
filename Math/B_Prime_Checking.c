#include <stdio.h>
#include <stdlib.h>
#include "math.h"
int main()
{
   long long Number = 0;
   int Flag = 0;

   scanf("%lli",&Number);
   if ((Number == 1))
   {
       Flag=1;
   }
   for(long long i=2 ; i<=sqrt(Number) ; i++)
   {
       if(Number % i == 0)
       {
           Flag = 1;
           break;
       }
   }
   if(Flag == 0)
   {
       printf("YES");
   }
   else
   {
       printf("NO");
   }
    return 0;
}
