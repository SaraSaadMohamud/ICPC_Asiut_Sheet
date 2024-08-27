#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long Number;
   int Flag=0;

   scanf("%lli",&Number);

   for(long long i=Number ; i>1 ; i/=2)
   {
       if(i % 2 != 0)
       {
           Flag=1;
           break;
       }
   }
   if(Flag == 1)
   {
       printf("NO");
   }
   else
   {
       printf("YES");
   }
    return 0;
}
