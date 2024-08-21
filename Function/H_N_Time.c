#include <stdio.h>
#include <stdlib.h>

void N_Time_Fun(int Num);

int main()
{
    int Count=0;
    scanf("%i",&Count);

    N_Time_Fun(Count);

    return 0;
}
void N_Time_Fun(int Num)
{
    for(int i=0 ; i<Num ; i++)
    {
        int count=0;
        char Character=0;

        scanf("%i\r",&count);
        scanf("%c",&Character);

        for(int i=0 ; i<count ; i++)
        {
            printf("%c ",Character);
        }
        printf("\n");
    }
}
