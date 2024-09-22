#include <stdio.h>
#include <stdlib.h>
char Character1;
int main()
{
    scanf("%c",&Character1);
    if((Character1>=65)&&(Character1<94))
        printf("ALPHA\nIS CAPITAL");
    else if((Character1>=97)&&(Character1<132))
        printf("ALPHA\nIS SMALL");
    else
        printf("IS DIGIT");
    return 0;
}
