#include <stdio.h>
#include <stdlib.h>
int Max,count;
int main()
{
    scanf("%i %i",&Max,&count);

    long long Array[Max],Array1[Max];

    for(int i=0;i<Max ; i++)
    {
        scanf("%lli ",&Array[i]);
        if(i==0)
        {
             Array1[i]=Array[i];
        }
        else
        {
            Array1[i] = Array[i] + Array1[i-1];
        }
    }
    while(count--)
    {
        int index1,index2;
        long long Summing=0;

        scanf("%i %i",&index1,&index2);
        Summing=(Array1[index2-1]-Array1[index1-1]+Array[index1-1]);
        printf("%lli\n",Summing);
    }

    return 0;
}
