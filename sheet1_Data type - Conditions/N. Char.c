#include <stdio.h>
#include <stdlib.h>
char Character1;
int main()
{
    scanf("%c",&Character1);
    if((Character1>=65)&&(Character1<94))
       printf("%c",Character1+32);
    else if((Character1>=97)&&(Character1<123))
        printf("%c",Character1-32);
    return 0;
}
