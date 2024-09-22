#include <stdio.h>
#include <stdlib.h>
#define Max_Size 1000000
char Array[Max_Size];
int main()
{
    scanf("%s",Array);
    for(int Count=0 ; Array[Count] != '\0' ; Count++)
    {
        if(Array[Count] == ',')
        {
            Array[Count]=' ';
        }
        else if (((int)Array[Count])>=65 &&(((int)Array[Count])<91))
        {
            Array[Count]=Array[Count]+32;
        }
        else
        {
            Array[Count]=Array[Count]-32;
        }
    }
    printf("%s",Array);
    return 0;
}
