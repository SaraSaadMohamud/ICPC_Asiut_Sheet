#include <stdio.h>
#include <stdlib.h>
unsigned int Max1,Max2,Number,flag=0;;
int Flag=-1;
int main()
{
    scanf("%i %i",&Max1,&Max2);
    int Array[Max1][Max2];
    for(int i=0 ; i<Max1 ; i++)
    {
        for(int j=0 ; j<Max2 ; j++)
        {
            scanf("%i",&Array[i][j]);
        }
    }
    scanf("%i",&Number);
    for(int i=0 ; i<Max1 ; i++)
    {
        for(int j=0 ; j<Max2 ; j++)
        {
            if(Number==Array[i][j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
        printf("will not take number");
    else
        printf("will take number");
    return 0;
}
