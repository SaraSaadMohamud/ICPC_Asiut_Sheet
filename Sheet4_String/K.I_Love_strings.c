#include <stdio.h>
#include <stdlib.h>
#define Max1 50
#define Max2 50
unsigned int Repeat=0;
char String1[Max1];
char String2[Max2];
unsigned int Lenght2=0;
unsigned int Lenght1=0;
unsigned int Length3=0;

int main()
{
    scanf("%i",&Repeat);
    while(Repeat--)
    {
        scanf("%s",String1);
        scanf("%s",String2);
        Lenght1=0;
        Lenght2=0;
        for(int Count=0 ;String1[Count] != '\0' ;Count++)
        {
            Lenght1++;
        }
        for(int Count=0 ;String2[Count] != '\0' ;Count++)
        {
            Lenght2++;
        }
        Length3=(Lenght1>Lenght2)?Lenght1:Lenght2;
        for(int Count=0 ;Count<Length3 ; Count++)
        {
            if(Count<Lenght1)
            printf("%c",String1[Count]);
            if(Count<Lenght2)
            printf("%c",String2[Count]);
        }
        printf("\n");
        }



    return 0;
}
