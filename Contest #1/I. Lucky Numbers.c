#include <stdio.h>
char Number1;
int main()
{
    scanf("%i",&Number1);
    if ((Number1%10)==0)
        printf("YES");
   else if((Number1/10)%(Number1%10)==0)
        printf("YES");
   else if((Number1%10)%(Number1/10)==0)
        printf("YES");
   else
        printf("No");
}
