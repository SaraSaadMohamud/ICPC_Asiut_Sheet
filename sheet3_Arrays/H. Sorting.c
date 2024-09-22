#include <stdio.h>
int Max,Minummum;
int main()
{
    scanf("%i",&Max);
    int Array1[Max];
   for(int i=0 ; i<Max ; i++)
    {
        scanf("%i",&Array1[i]);
    }
    for(int i=0 ; i< Max ; i++)
    {
        Minummum=100;
        for(int j=0 ; j<Max ; j++)
        {
            if(Array1[j] < Minummum)
            {
                Minummum=Array1[j];
            }
        }
        for(int j=0 ; j< Max ; j++)
        {
            if(Array1[j]==Minummum)
            {
                Array1[j]=101;
                break;
            }
        }
        printf("%i ",Minummum);
    }
    return 0;
}
