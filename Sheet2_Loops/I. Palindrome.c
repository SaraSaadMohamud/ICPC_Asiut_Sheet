#include <stdio.h>
#include <stdlib.h>
long long Number,Result=0;
int main()
{
   scanf("%lli",&Number);
   for(long long i=Number ; i>0 ; i=i/10)
   {
       Result=(Result*10) + (i%10);
   }
   if(Number==Result)
   {
       printf("%lli\n",Number);
       printf("YES");
   }
   else
   {
       printf("%lli\n",Result);
       printf("NO");
   }
    return 0;
}
