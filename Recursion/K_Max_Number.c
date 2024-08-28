#include <stdio.h>
#include <stdlib.h>
#include "math.h"

long long Get_Max(long long Arr[],int len);


int main()
{
   int index;
   scanf("%i",&index);

   long long Arr[index];

   for(int i=0 ; i<index ; i++)
   {
       scanf("%lli",&Arr[i]);
   }
   long long Result = Get_Max(Arr,index-1);

   printf("%lli",Result);

    return 0;
}
long long Get_Max(long long Arr[],int len)
{
    if(Arr[len-1] < Arr[len] )
    {
       Arr[len-1] =  Arr[len] ;
    }
    if(len >0)
    {
        Get_Max(Arr,--len);
    }
    return(Arr[0]);
}
