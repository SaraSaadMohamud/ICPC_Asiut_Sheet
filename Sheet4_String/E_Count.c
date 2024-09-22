#include <stdio.h>
#include <stdlib.h>
#define Max_Size 10000000

char string1[Max_Size];
char Name[]="Sara";
int main()
{
    int Summing=0,i=0;

    scanf("%s",string1);

    for( i=0 ;i<Max_Size ; i+=1)
    {
        if(string1[i] == '\0')
        {
            break;
        }
    }
    for(int count=0 ; count<i ; count++)
    {
        Summing+=string1[count]-'0';
    }
    printf("%i",Summing);
    return 0;
}
