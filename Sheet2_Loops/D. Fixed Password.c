#include <stdio.h>
int True_password=1999;
int Enter_password;
int main()
{
   for(int count=1000;count<=(10000-1);count++)
   {
       scanf("%i",&Enter_password);
       if(Enter_password==True_password)
       {
           printf("Correct\n");
           break;
       }
       else
        printf("Wrong\n");
   }
    return 0;
}
