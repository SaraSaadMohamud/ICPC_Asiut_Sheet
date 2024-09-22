#include <stdio.h>
#include <math.h>
int Number1,Number2;
float X,Y,Z;
int main()
{

    scanf("%i %i",&Number1,&Number2);
    X=floor((float)Number1/Number2);
    Y=ceil((float)Number1/Number2);
    Z=round((float)Number1/Number2);
    printf("floar %i / %i = %0.f\n",Number1,Number2,X);
    printf("ceil %i / %i = %0.f\n",Number1,Number2,Y);
    printf("round %i / %i= %0.f\n",Number1,Number2,Z);

    return 0;
}
