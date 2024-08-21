#include <stdio.h>
#include <stdlib.h>
void Sort_Fun(int Arr[],int len);
int Get_Distinct_Number(int Arr[],int len);
int main()
{
    int index=0;
    scanf("%i",&index);

    int Array[index];
    for(int i=0 ; i<index ; i++)
    {
        scanf("%i",&Array[i]);
    }

    Sort_Fun(Array,index);
    printf("%i\n",Get_Distinct_Number(Array,index));

    return 0;
}
int Get_Distinct_Number(int Arr[],int len)
{
    int Count=0;

    for(int i=0 ; i<len; i++)
    {
        if(Arr[i] != Arr[i+1])
        {
            Count++;
        }
    }
    return(Count);
}
void Sort_Fun(int Arr[],int len)
{
    int Temp;
    for(int i=0 ; i<len-1 ; i++)
    {
        for(int j=0 ; j<len-i-1 ; j++)
        {
            if(Arr[j] > Arr[j+1])
            {
                Temp =  Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = Temp;
            }
        }
    }
}
