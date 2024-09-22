#include <stdio.h>
#include <stdlib.h>
unsigned char Number1,Number2;
int main()
{
   scanf("%i%i",&Number1,&Number2);
   if(Number1>=Number2)
   {
       printf("Yes\n");
   }
   else
   {
       printf("No\n");
   }
    return 0;
}
