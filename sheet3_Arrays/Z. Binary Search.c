#include <stdio.h>
#include <stdlib.h>
int Max ,Count;
int main()
{
    scanf("%i %i",&Max,&Count);
    long long Array[Max];
    for(int i=0 ; i<Max ; i++)
    {
        scanf("%lli",&Array[i]);
    }
    while(Count--)
    {
        int Value,Flag=0;
        scanf("%i",&Value);
        for(int i=0 ; i<Max ; i++)
        {
            if(Array[i]==Value)
            {
                Flag=1;
                break;
            }
        }
        if(Flag==1)
        {
            printf("found\n");
        }
        else
        {
            printf("not found\n");
        }
    }
    return 0;
}
