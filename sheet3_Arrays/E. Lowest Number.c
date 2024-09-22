#include <stdio.h>
int Max,position;
int main()
{
    scanf("%i",&Max);
    long long Array[Max],Minum=9223372036854775807;
    for (int i=0 ; i<Max ; i++)
    {
        scanf("%lli",&Array[i]);
        if(Array[i] < Minum)
        {
            Minum=Array[i];
            position= (1+i);
        }
    }
    printf("%lli %i",Minum,position);
    return 0;
}
