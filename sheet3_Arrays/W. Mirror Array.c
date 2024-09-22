#include <stdio.h>
#include <stdlib.h>
int Max1,Max2;
int main()
{
    scanf("%i %i",&Max1,&Max2);
    int Array1[Max1][Max2],Array2[Max1][Max2];
    int Reverse;
    for(int i=0 ; i<Max1 ; i++)
    {
        for(int j=0 ; j<Max2 ; j++)
        {
            scanf("%i",&Array1[i][j]);
        }
    }
    for(int i=0 ; i<Max1 ; i++)
    {
        Reverse=(Max2-1);
        for(int j=0 ; j<Max2 ; j++)
        {
            Array2[i][Reverse]=Array1[i][j];
            Reverse--;
        }
    }
    for(int i=0 ; i<Max1 ; i++)
    {
        for(int j=0 ; j<Max2 ; j++)
        {
           printf("%i ",Array2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
