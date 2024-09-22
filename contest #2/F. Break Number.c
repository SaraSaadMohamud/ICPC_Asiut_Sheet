#include <stdio.h>
#include <stdlib.h>
int Number,k;
long long array[100000],i=0,Max,Minum=0,j;
int main()
{
    scanf("%i",&Number);
    for(int s=0 ; s<Number ; s++)
    {
        scanf("%lli",&array[s]);
        i++;
    }
    for( k=0 ; k<Number ; k++)
    {
        Max=0;
        for( j=array[k] ; j>0 ; j = j/2)
        {
            if(j%2==0)
            {
                Max++;
            }
            else
            {
                break;
            }
        }
        if(Minum<Max)
        {
            Minum=Max;
        }
    }
    printf("%lli",Minum);
    return 0;
}
