#include <stdio.h>
#include <stdlib.h>
int Max,Sum=0;
int main()
{
    scanf("%i",&Max);
    long long Array[Max],Minummum=9223372036854775807;
    for(int i=0 ; i<Max ; i++)
    {
        scanf("%lli",&Array[i]);
    }
    for(int i=0 ; i<Max ; i++)
    {
        if(Array[i] < Minummum)
        {
            Minummum=Array[i];
        }
    }
    for(int i=0 ; i<Max ; i++)
    {
        if(Array[i]==Minummum)
        {
            Sum++;
        }
    }
    if(Sum%2==0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }
    return 0;
}
