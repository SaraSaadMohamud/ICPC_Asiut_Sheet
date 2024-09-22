#include <stdio.h>
#include <stdlib.h>
void Get_New_Array(int Arr1[],int Arr2[],int Arr3[],int len);
int main()
{
    int index=0;
    int N_Index=0;

    scanf("%i",&index);
    N_Index=(2*index);

    int Array1[index];
    int Array2[index];
    int Array3[N_Index];

    for(int i=0 ; i<index ; i++)
    {
        scanf("%i",&Array1[i]);
    }

    for(int i=0 ; i<index ; i++)
    {
        scanf("%i",&Array2[i]);
    }

    Get_New_Array(Array1,Array2,Array3,index);

    return 0;
}
void Get_New_Array(int Arr1[],int Arr2[],int Arr3[],int len)
{
    int j=0;
    for(int i=0 ; i<len ; i++)
    {
        Arr3[j]=Arr2[i];
        j++;
    }
    for(int i=0 ; i<len ; i++)
    {
        Arr3[j]=Arr1[i];
        j++;
    }
    for(int i=0 ; i<(len*2) ; i++)
    {
        printf("%i ",Arr3[i]);
    }
}
