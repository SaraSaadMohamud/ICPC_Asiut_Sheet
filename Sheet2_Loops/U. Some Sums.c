#include <stdio.h>
int Number,Sum=0,Result=0;
int var1,var2;
int main()
{
    scanf("%i %i %i",&Number,&var1,&var2);
    for(int i = 1 ; i <= Number ; i++)
    {
        for(int k=i ; k>0 ; k=k/10)
        {
                Sum+=(k%10);
        }
        if(( Sum >= var1 )&& (Sum <= var2))
            {
                Result = (Result+i);
            }
        Sum = 0;
    }
    printf("%i",Result);
    return 0;
}
