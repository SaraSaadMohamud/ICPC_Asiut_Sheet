#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int main()
{
    char str[1000000];
    int Count=1;

    gets(str);

    int len=strlen(str);

    if((str[0] == ' ' )||(str[0] == '?' )||(str[0] == '.' )||(str[0] == ',' )||(str[0] == ',' )||(str[0] == '!' ))
    {
        Count =0;
    }

    for(int i=0 ; i<len ; i++)
    {
        if((str[i] == ' ' )||(str[i] == '?' )||(str[i] == '.' )||(str[i] == ',' )||(str[i] == ',' )||(str[i] == '!' ) )
        {
            if(((str[i+1] >=65) &&(str[i+1] <=90)) || ((str[i+1] >= 97) &&(str[i+1] <=122)))
            {
                Count++;
            }
        }
    }
    printf("%i",Count);
    return 0;
}
