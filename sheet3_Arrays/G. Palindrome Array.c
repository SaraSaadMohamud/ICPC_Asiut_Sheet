#include <stdio.h>
int Max,Max1,flag=0;
int main()
{
    scanf("%i",&Max);
    Max1= Max-1;
    long long Array1[Max],Array2[Max];
    for(int i=0 ; i<Max ; i++)
    {
        scanf("%lli",&Array1[i]);
    }
    for(int i=0 ; i<Max ; i++)
    {
        Array2[i]=Array1[Max1];
        Max1--;
    }
    for(int i=0 ; i<Max ; i++)
    {
        if(Array1[i] != Array2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag == 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
