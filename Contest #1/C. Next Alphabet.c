#include <stdio.h>
char Number;
int main()
{
   scanf("%c",&Number);
   if(Number=='z')
    printf("%c",97);
   else
    printf("%c",++Number);
    return 0;
}
