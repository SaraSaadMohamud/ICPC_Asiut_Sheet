#include <stdio.h>
unsigned int Number;
int main()
{
    scanf("%i",&Number);
    for(int i=1;i<=Number;i++)
    {
        if(Number%i==0)
            printf("%i\n",i);
    }
    return 0;
}
