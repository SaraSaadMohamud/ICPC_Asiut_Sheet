#include <stdio.h>
#include <stdlib.h>
long long Number1,Number2,Number3;
int main()
{
   scanf("%lli %lli %lli",&Number1,&Number2,&Number3);
   if((Number1<=Number2)&&(Number1<=Number3))
   {
       if (Number2<=Number3)
             printf("%lli\n%lli\n%lli\n",Number1,Number2,Number3);
        else
         printf("%lli\n%lli\n%lli\n",Number1,Number3,Number2);
   }
   else if((Number2<=Number1)&&(Number2<=Number3))
   {
       if(Number1<=Number3)
         printf("%lli\n%lli\n%lli\n",Number2,Number1,Number3);
       else
            printf("%lli\n%lli\n%lli\n",Number2,Number3,Number1);
   }
   else
   {
       if(Number2<=Number1)
            printf("%lli\n%lli\n%lli\n",Number3,Number2,Number1);
       else
            printf("%lli\n%lli\n%lli\n",Number3,Number1,Number2);
   }
   printf("\n%lli\n%lli\n%lli",Number1,Number2,Number3);
    return 0;
}
