#include <stdio.h>
#include <stdlib.h>
long long Sum=0;
int Element_Number;
int main()
{
    scanf("%lli",&Element_Number);
    int Array[Element_Number];
    for( int i=0 ; i<Element_Number ;i++)
    {
        scanf("%lli",&Array[i]);
    }
     for( int j=0 ; j<Element_Number ; j++)
    {
          Sum += Array[j] ;
    }
    if(Sum<0)
        Sum*=-1;
    printf("%lli",Sum);
    return 0;
}
