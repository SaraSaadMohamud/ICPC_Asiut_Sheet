#include <stdio.h>
#include <stdlib.h>
void Shift_Zeros(int Arr[],int len);
int main()
{
    int index=0;
    scanf("%i",&index);

    int Array[index];
    for(int i=0 ; i<index ; i++)
    {
        scanf("%i",&Array[i]);
    }

    Shift_Zeros(Array,index);
    for(int i=0 ; i<index ; i++)
    {
        printf("%i ",Array[i]);
    }
    return 0;
}
void Shift_Zeros(int Arr[],int len)
{
    for(int i=len-1 ; i>=0 ; i--)
    {
        if(Arr[i] == 0)
        {
            for(int j=i ; j<len-1 ; j++)
            {
               Arr[j] = Arr[j+1];
               Arr[j+1] = 0;
            }
            Arr[len-1]=0;
        }
    }
}
