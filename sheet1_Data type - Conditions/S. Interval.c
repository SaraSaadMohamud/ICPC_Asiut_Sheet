#include <stdio.h>
#include <stdlib.h>
float Number1;
int main()
{
    scanf("%f",&Number1);
    if((Number1>=0)&&(Number1<=25))
        printf("Interval [0,25]");
    else if((Number1>25)&&(Number1<=50))
        printf("Interval (25,50]");
    else if((Number1>50)&&(Number1<=75))
        printf("Interval (50,75]");
    else if((Number1>75)&&(Number1<=100))
        printf("Interval (75,100]");
    else
        printf("Out of Intervals");
    return 0;
}
