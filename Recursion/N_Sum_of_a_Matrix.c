#include <stdio.h>
#include <stdlib.h>
int row,column;

void Get_Sum (int Arr1[][column],int Arr2[][column],int Arr3[][column],int len1 );

int main()
{

    scanf("%i %i",&row,&column);

    int Array1[row][column];
    int Array2[row][column];
    int Array3[row][column];
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            scanf("%i",&Array1[i][j]);
        }
    }

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            scanf("%i",&Array2[i][j]);
        }
    }

    Get_Sum(Array1,Array2,Array3,row);

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            printf("%i ",Array3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
void Get_Sum (int Arr1[][column],int Arr2[][column],int Arr3[][column],int len1 )
{
   for(int i=0 ; i<column ; i++)
   {
       Arr3[len1-1][i]= Arr1[len1-1][i] + Arr2[len1-1][i];
   }
   if(len1>0)
   {
       Get_Sum(Arr1,Arr2,Arr3,--len1);
   }

}
