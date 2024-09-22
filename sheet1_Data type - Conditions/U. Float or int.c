#include <stdio.h>
#include <stdlib.h>
float Number;
int main()
{
    scanf("%f",&Number);
    if((Number/(int)Number)==1)
        printf("int %0.0f",Number);
    else
        printf("float %i %f",(int)Number,(Number-(int)Number));
    return 0;
}
