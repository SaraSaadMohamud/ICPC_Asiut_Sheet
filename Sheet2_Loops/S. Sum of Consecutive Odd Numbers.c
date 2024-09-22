#include <stdio.h>
unsigned int Number1,Number2,count1,count2,Max,Sum=0;
int main()
{
    scanf("%i",&Max);
    while(Max)
    {
        scanf("%i%i",&Number1,&Number2);
        if(Number1>=Number2)
        {
            count1=Number2;
            count2=Number1;
        }
        else
        {
            count1=Number1;
            count2=Number2;
        }
        for(int i= count1+1; i < count2 ; i++)
        {
            if(i%2!=0)
                Sum+=i;
        }
        printf("%i\n",Sum);
        Sum=0;
        Max--;
    }
    return 0;
}
