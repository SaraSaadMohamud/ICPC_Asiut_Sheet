#include <stdio.h>
#include <stdlib.h>
unsigned int Max,k=0;
int main()
{
    scanf("%i",&Max);
    long long Array1[Max];
    long long Array2[Max];
    for(int i=0 ; i<Max ; i++)
    {
        scanf("%lli",&Array1[i]);
    }
    for(int i=0 ; i<Max ; i++)
    {
        scanf("%lli",&Array2[i]);
    }
    for(int i=0 ; i<Max ; i++)
    {
        for(int j=0 ; j<Max ; j++)
        {
            if(Array1[i]==Array2[j])
            {
                k++;
                Array2[j]=0;
                break;
            }
        }
    }
    if(k==Max)
        printf("yes");
    else
        printf("no");
    return 0;
}
