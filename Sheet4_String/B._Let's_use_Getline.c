#include <stdio.h>
#include <stdlib.h>
#define Max_Size 10000000
char String[Max_Size];
int main()
{
    gets(String);
    for(int Count =0 ; String[Count] != '\0' ;Count++)
    {
        if(String[Count] == '\\')
        {
            break;
        }
        printf("%c",String[Count]);
    }
    return 0;
}
