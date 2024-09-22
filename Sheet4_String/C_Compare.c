#include <stdio.h>
#include <stdlib.h>
char Array1[21],Result=0;
char Array2[21];
char count=0;
int main()
{
    gets(Array1);
    gets(Array2);
    for(count = 0 ; count <20 ; count++)
    {
        if(Array1[count] < Array2[count])
        {
            Result=1;
            printf("%s",Array1);
            break;
        }
        if(Array1[count] >Array2[count])
        {
            Result=1;
            printf("%s",Array2);
            break;
        }
    }
    if(Result==0)
    {
        printf("%s",Array1);
    }
    return 0;
}
