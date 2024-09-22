#include <stdio.h>
unsigned char Number1;
int main()
{
   scanf("%i",&Number1);
   for(int i=1;i<=Number1;i++)
   {
       for(int k=Number1;k>i; k--)
       {
           printf(" ");
       }
       for(int j=i*3;j>i+1;j--)
       {
           printf("*");
       }
       printf("\n");
   }
    return 0;
}
