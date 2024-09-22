#include <stdio.h>
#include <stdlib.h>
int Max;long long Minum=9223372036854775807,Maxim=-9223372036854775808,Max_pos,Min_pos;
int main()
{
    scanf("%i",&Max);
    int Array[Max];
    for(int i=0 ; i<Max ; i++)
    {
        scanf("%i",&Array[i]);
    }
    for(int k=0 ; k<Max ; k++)
    {
        if(Array[k] < Minum)
        {
            Minum=Array[k];
            Min_pos=k;
        }
    }
    for(int i=0 ; i<Max ; i++)
    {
        if(Array[i] > Maxim)
        {
            Maxim=Array[i];
            Max_pos=i;
        }
    }
    Array[Max_pos]=Minum;
    Array[Min_pos]=Maxim;
    for(int i=0 ; i<Max ; i++)
    {
        printf("%i ",Array[i]);
    }
    return 0;
}
