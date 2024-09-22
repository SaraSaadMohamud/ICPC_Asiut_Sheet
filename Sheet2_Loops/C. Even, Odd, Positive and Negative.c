#include <stdio.h>
short N;
int Number,Even=0,Odd=0,Positive=0,Negative=0,i;
int main()
{
    scanf("%i",&N);
    for(i=0;i<N;i++)
    {
       scanf("%i",&Number);
       if(Number%2==0)
        Even+=1;
       else
        Odd+=1;
       if(Number>0)
        Positive+=1;
       else if(Number<0)
        Negative+=1;
    }
    printf("Even: %i\n",Even);
    printf("Odd: %i\n",Odd);
    printf("Positive: %i\n",Positive);
    printf("Negative: %i\n",Negative);
    return 0;
}
