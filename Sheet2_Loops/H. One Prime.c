#include <stdio.h>
int Number,flag=0;
int main()
{
    scanf("%i",&Number);
    for(int i=2;i<Number;i++)
    {
        if(Number%i==0)
             flag=1;
    }
    if(flag==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
