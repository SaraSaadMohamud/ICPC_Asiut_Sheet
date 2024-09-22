#include <stdio.h>
#include <stdlib.h>
int Max,Width,Hight;
int main()
{
    scanf("%i",&Max);

    while(Max--)
    {
        scanf("%i %i",&Width,&Hight);
        if(Width == Hight)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }
    return 0;
}
