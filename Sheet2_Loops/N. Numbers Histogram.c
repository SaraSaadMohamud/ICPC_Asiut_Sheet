#include <stdio.h>
char var;
int Number1,Number2;
int main()
{
  scanf("%c",&var);
  scanf("%i",&Number1);
   while (Number1)
   {
       scanf("%i",&Number2);
       while(Number2)
       {
           printf("%c",var);
           Number2--;
       }
       printf("\n");
       Number1--;
   }
    return 0;
}
