#include <stdio.h>
#include <stdlib.h>
int  Max,Numbers;
int main()
{
    scanf("%i %i",&Max,&Numbers);

    int ArrayA[Max];
    int Freq_Array[Numbers+1];

    for(int i=0 ; i<Max ; i++)
    {
        scanf("%i",&ArrayA[i]);
    }
    for(int i=0 ; i<=Numbers ; i++)
    {
        Freq_Array[i]=0;
    }
    for(int i=0 ; i<Max ; i++)
    {
        Freq_Array[ArrayA[i]]+=1;
    }
    for(int i=1 ; i<=Numbers ; i++)
    {
        printf("%i\n",Freq_Array[i]);
    }
    return 0;
}



