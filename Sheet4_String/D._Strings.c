#include <stdio.h>
#include <stdlib.h>
char String1[11],size1=0;
char String2[11],size2=0;
char const1=0;
int main()
{
    gets(String1);
    gets(String2);
    for(int count=0 ; count<11 ; count++)
    {
        if(String1[count] == '\0')
        {
            printf("%i ",size1);
            break;
        }
        size1+=1;
    }
    for(int count=0 ; count<11; count++)
    {
        if(String2[count] == '\0')
        {
            printf("%i",size2);
            break;
        }
        size2+=1;
    }
    printf("\n%s%s\n",String1,String2);
    const1=String1[0];
    String1[0]=String2[0];
    String2[0]=const1;
    printf("%s %s",String1,String2);
    return 0;
}
