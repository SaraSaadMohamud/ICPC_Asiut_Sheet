#include <stdio.h>
int Number,Value=1;
int main()
{
   scanf("%i",&Number);
   for(int i=2;i<=Number;i++)
   {
      for(int j=2;j<i;j++)
      {
          if(i%j==0)
          {
              Value=0;
              break;
          }
          else
            Value=1;
      }
     if(Value==1)
         printf("%i ",i);

   }
    return 0;
}
