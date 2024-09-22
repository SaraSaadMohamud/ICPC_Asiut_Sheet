#include <stdio.h>
int Number,X=1,Y=2,Z=3,i=0;
int main()
{
    scanf("%i",&Number);
    while(Number)
    {
        printf("%i %i %i PUM\n",X+i,Y+i,Z+i);
        i+=4;
        Number--;
    }
    return 0;
}
