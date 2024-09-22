#include <stdio.h>
char Number1,Number2,count,counter;int Sum=0;
int main()
{
    while(1)
    {
        scanf("%i%i",&Number1,&Number2);
        if((Number1<=0)||(Number2<=0))
            break;
        else
        {
            if(Number1<=Number2)
            {
                count=Number1;
                counter=Number2;
            }
            else
            {
                count=Number2;
                counter=Number1;
            }
            for(count ; count<=counter ; count++)
            {
                printf("%i ",count);
                Sum+=count;
            }
            printf("sum=%i\n",Sum);
            Sum=0;
        }
    }
    return 0;
}
