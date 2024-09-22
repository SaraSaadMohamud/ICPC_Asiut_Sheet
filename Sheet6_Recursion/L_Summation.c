#include <stdio.h>
#include <stdlib.h>

long long Get_Sum(long long Arr[],int len);

int main()
{
    int index=0;
    scanf("%i",&index);

    long long Array[index];
    for(int i=0 ; i<index ; i++)
    {
        scanf("%lli",&Array[i]);
    }

    long long Sum = Get_Sum(Array,--index);
    printf("%lli",Sum);

    return 0;
}
long long Get_Sum(long long Arr[],int len)
{
    if(len < 0)
    {
        return(0);
    }
    return(Arr[len] + Get_Sum(Arr,--len) );
}
