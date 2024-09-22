#include <stdio.h>
#include <stdlib.h>
long long Count,Max_Element,Odd=0,Even=0;
int main()
{
    scanf("%lli",&Count);
    while(Count--)
    {
        scanf("%lli",&Max_Element);
        long long  Array1[Max_Element],Refrance=(Max_Element/2);
        for(int i=0 ; i<Max_Element ; i++)
        {
             scanf("%lli",&Array1[i]);
        }
            for(int i=0 ; i<Max_Element ; i++)
        {
            if(Array1[i]%2 ==0)
            {
                Even++;
            }
            else
            {
                Odd++;
            }
        }
        if(Max_Element%2 !=0)
        {
            printf("-1\n");
        }
        else
        {
            if(Odd == Even)
            {
                printf("0\n");
            }
            else if(Odd > Even)
            {
                Odd -= Refrance;
                printf("%lli\n",Odd);
            }
            else
            {
                Even -= Refrance;
                printf("%lli\n",Even);
            }
        }
        Odd=0;
        Even=0;
    }
    return 0;
}
