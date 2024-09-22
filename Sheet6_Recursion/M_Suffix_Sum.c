#include <stdio.h>
#include <stdlib.h>
long long Get_Sum(long long Arr[],int len,int max);
int main()
{
    int Num1,Num2;
    scanf("%i %i",&Num1,&Num2);
    long long Array[Num1];

    for(int i=0 ; i<Num1; i++)
    {
        scanf("%lli",&Array[i]);
    }

    long long Sum = Get_Sum(Array,Num1,Num2);
    printf("%lli",Sum);

    return 0;
}
long long Get_Sum(long long Arr[],int len,int Max)
{
    if (Max == 0)
    {
        return(0);
    }
    else
    {
        return(Arr[--len] + Get_Sum(Arr,len,--Max));
    }
}
