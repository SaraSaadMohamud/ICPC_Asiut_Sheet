#include <stdio.h>
int Max,Max1;
int main()
{
    scanf("%i",&Max);
    Max1=Max-1;
    long long Array1[Max],Array2[Max];
    for(int i=0 ; i<Max ; i++)
    {
        scanf("%lli",&Array1[i]);
    }
    for(int i=0 ; i<Max ;i++)
    {
        Array2[i]=Array1[Max1];
        Max1--;
    }
    for(int i=0 ; i<Max ;i++)
    {
        printf("%lli ",Array2[i]);
    }
    return 0;
}
