#include <stdio.h>
long long Max_Number,Number,fact=1;

int main()
{
    scanf("%lli",&Max_Number);
    for(int i=1;i<=Max_Number;i++)
    {
         scanf("%lli",&Number);
         for(int j=1;j<=Number;j++)
           {
              fact*=j;
           }
        printf("%lli\n",fact);
        fact=1;
    }
    if(Number==0)
        printf("1");
    return 0;
}
