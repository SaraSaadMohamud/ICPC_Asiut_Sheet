#include <stdio.h>
#include <stdlib.h>
double Get_Avarage_Fun(float Arr[],int size);
int main()
{
    int index=0;
    scanf("%i",&index);

    float Array[index];
    float Avarage=0;

    for(int i=0 ; i<index ; i++)
    {
        scanf("%f",&Array[i]);
    }

    Avarage= (Get_Avarage_Fun(Array,index))/index;
    printf("%0.7f\n",Avarage);

    return 0;
}
double Get_Avarage_Fun(float Arr[],int size)
{
    double Sum=0;

    for(int i=0 ; i<size ; i++)
    {
        Sum+=Arr[i];
    }
   return(Sum);
}
