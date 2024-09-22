#include <stdio.h>
int Number;
int main()
{
   scanf("%i",&Number);
   for(int i=1;i<=12;i++)
       printf("%i * %i = %i\n",Number,i,Number*i);
    return 0;
}
