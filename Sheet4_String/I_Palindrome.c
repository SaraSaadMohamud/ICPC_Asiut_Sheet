#include <stdio.h>
#include <stdlib.h>
#define Max_Size 1000
char String[Max_Size];
unsigned int Count=0;
unsigned int Length=0;

int main()
{
    gets(String);
    for(Count=0 ; String[Count] !=0 ; Count++)
    {
        Length++;
    }

    unsigned int Size=Length-1;

    for(Count=0 ; Count<(Length/2) ; Count++)
    {
        if(String[Count] == String[Size])
        {
            Size--;
        }
        else
        {
            printf("NO");
            return(0);
        }
    }
    printf("YES");
    return 0;
}
