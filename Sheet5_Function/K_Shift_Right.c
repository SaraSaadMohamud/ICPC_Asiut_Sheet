#include <stdio.h>
#include <stdlib.h>

void Right_Shift_Fun(int Arr[],int index,int Count);

int main()
{
   int index=0;
   int Count=0;

   scanf("%i %i",&index,&Count);
   int Array[index];

   for(int i=0 ; i<index ; i++)
   {
       scanf("%i",&Array[i]);
   }

   Right_Shift_Fun(Array,index,Count);

   for(int i=0 ; i<index ; i++)
   {
       printf("%i ",Array[i]);
   }

   return 0;
}
void Right_Shift_Fun(int Arr[],int index,int Count)
{
    int Temp[index];
    int counter=0;
    int Size=index-1;
    while(Count--)
    {

        for(int i=0 ; i< index-1 ; i++)
        {
            Temp[i+1]=Arr[i];
        }
        Temp[0]=Arr[Size];
        for(int i=0 ; i<index ; i++)
        {
            Arr[i]=Temp[i];
        }
    }
}
