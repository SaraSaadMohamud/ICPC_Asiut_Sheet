#include <stdio.h>
#include <stdlib.h>

#define Max_Size 1000

char String1[Max_Size];
char String2[Max_Size];
unsigned int MaxSize_1=0;
unsigned int MaxSize_2=0;

int main()
{
    gets(String1);
    gets(String2);

    for(int Count=0 ; String1[Count] != '\0' ;Count++)
    {
        MaxSize_1++;
    }
    for(int Count=0 ; String2[Count] != '\0' ;Count++)
    {
        MaxSize_2++;
    }
    printf("%i %i\n",MaxSize_1,MaxSize_2);
    printf("%s %s",String1 ,String2);

    return 0;
}
