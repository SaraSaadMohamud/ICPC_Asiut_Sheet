#include <stdio.h>
#include <stdlib.h>
int Max;
int main()
{
    scanf("%i",&Max);
    long long Array[Max];
    for( int i=0 ; i<Max ; i++)
    {
        scanf("%lli",&Array[i]);
    }
    for( int i=0 ; i<Max ; i++)
    {
        if(Array[i]<=10)
        {
            printf("A[%i] = %lli\n",i,Array[i]);
        }
    }
    return 0;
}
