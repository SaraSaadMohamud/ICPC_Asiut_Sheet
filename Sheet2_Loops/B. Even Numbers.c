#include <stdio.h>
short Number,i;
int main()
{
   scanf("%i",&Number);
    for(i=1;i<=Number;i++)
    {
        if(i%2==0)
            printf("%i\n",i);
        if(Number==1)
            printf("-1");
    }
    return 0;
}
