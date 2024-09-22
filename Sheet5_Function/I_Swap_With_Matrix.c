#include <stdio.h>
#include <stdlib.h>

int index;
int main()
{
    int X=0;
    int Y=0;

    scanf("%i %i %i ",&index,&X,&Y);
    X--;
    Y--;
    void Swap_Two_Matrix(int Arr[][index],int var1,int var2);
    int Array[index][index];

    for(int i=0; i<index ; i++)
    {
        for(int j=0 ; j<index ; j++)
        {
            scanf("%i",&Array[i][j]);
        }
    }

    Swap_Two_Matrix(Array,X,Y);

    for(int i=0; i<index ; i++)
    {
        for(int j=0 ; j<index ; j++)
        {
            printf("%i ",Array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void Swap_Two_Matrix(int Arr[][index],int var1,int var2)
{
    int Temp[index][index];

        for(int j=0 ; j<index ; j++)
        {
            Temp[var1][j] = Arr[var1][j];
        }
        for(int j=0 ; j<index ; j++)
        {
            Arr[var1][j] = Arr[var2][j];
        }
        for(int j=0 ; j<index ; j++)
        {
            Arr[var2][j]=Temp[var1][j];
        }
        ///////////////////////////////////////////////
        for(int j=0 ; j<index ; j++)
        {
            Temp[j][var1] = Arr[j][var1];
        }
        for(int j=0 ; j<index ; j++)
        {
            Arr[j][var1] = Arr[j][var2];
        }
        for(int j=0 ; j<index ; j++)
        {
            Arr[j][var2]=Temp[j][var1];
        }
}
