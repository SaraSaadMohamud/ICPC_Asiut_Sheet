#include <stdio.h>
#include <stdlib.h>

void Print_Event_Index(long long Arr[],int Num);

int main()
{
    int index=0;
    int len=0;
    scanf("%i",&index);

    long long Array[index];
    if(index %2 == 0)
    {
        len=index-2;
    }
    else
    {
        len=index-1;
    }

    for(long long i=0 ; i<index ; i++)
    {
        scanf("%lli",&Array[i]);
    }
    Print_Event_Index(Array,len);
    return 0;
}
void Print_Event_Index(long long Arr[],int Num)
{
    if(Num == 0)
    {
        printf("%lli",Arr[Num]);
    }
    else
    {
         printf("%lli ",Arr[Num]);
    }
    Num-=2;

    if(Num >= 0)
    {
        Print_Event_Index(Arr,Num);
    }
}
