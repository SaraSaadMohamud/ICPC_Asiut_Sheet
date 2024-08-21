#include <stdio.h>
#include <stdlib.h>
void Get_Min_Max_Value(int Array[],int Size,int *ptr1,int *ptr2);

int index;

int main()
{
    scanf("%i",&index);
    int Array[index];

    for(int i=0 ; i<index ; i++)
    {
        scanf("%i",&Array[i]);
    }
    int Min=Array[0];
    int Max=Array[0;
    Get_Min_Max_Value(Array,index,&Min,&Max);
    printf("%i %i ",Min,Max);

    return 0;
}
void Get_Min_Max_Value(int Array[],int Size,int *ptr1,int *ptr2)
{
    for(int i=0 ; i<Size ; i++)
    {
        if(Array[i] < (*ptr1))
        {
            *ptr1 = Array[i];
        }
    }
     for(int i=0 ; i<Size ; i++)
    {
        if(Array[i] > (*ptr2))
        {
            *ptr2 = Array[i];
        }
    }
}
