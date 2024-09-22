#include <stdio.h>
char Number;
int main()
{
   scanf("%i",&Number);
   for(int i=1 ; i <= Number ;i++)
   {
       for(int j=1 ;j <= i ;j++)
       {
           printf("*");
       }
       printf("\n");
   }
    return 0;
}
