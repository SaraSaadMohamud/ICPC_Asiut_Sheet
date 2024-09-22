#include <stdio.h>
unsigned int Number1,Number2,flag=0,flag2=0;
int main()
{
    scanf("%i",&Number1);
    scanf("%i",&Number2);
   for(int i = Number1 ;i <= Number2 ; i++)
   {
       for(int j = i ; j > 0 ; j = j/10 )
       {
               if((j%10) == 4 || (j%10) == 7)
               {
                     flag = 1;
                     if(j==4||j==7)
                        flag2=1;
               }
               else
               {
                   flag  = 0 ;
                   break ;
               }
        }
        if(flag==1)
        {
            printf("%i ",i);
        }
   }
   if(flag2 == 0)
    printf("-1");
    return 0;
}
