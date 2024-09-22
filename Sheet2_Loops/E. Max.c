#include <stdio.h>
int Max_Value=0,Max_Number,Number;
int main()
{
    scanf("%i",&Max_Number);
    for(int i=1;i<=Max_Number;i++)
    {
        scanf("%i",&Number);
        if(Max_Value<Number)
            Max_Value=Number;
    }
    printf("%i\n",Max_Value);
    return 0;
}
