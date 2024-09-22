#include <stdio.h>
int Max ;
int main()
{
    scanf("%i",&Max);
    int Array[Max];
    for(int i=0 ; i<Max ; i++)
    {
        scanf("%i",&Array[i]);
    }
    for(int i = 0 ; i < Max ; i++)
    {
        if(Array[i] < 0)
        {
            Array[i]=2;
        }
        else if (Array[i] > 0)
        {
            Array[i]=1;
        }
        else
        {
            Array[i]=0;
        }
    }
    for(int i=0 ; i<Max ; i++)
    {
        printf("%i ",Array[i]);
    }
    return 0;
}
