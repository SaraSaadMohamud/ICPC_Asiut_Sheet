#include <stdio.h>
char Name1_1[255],Name1_2[255],Name2_1[255],Name2_2[255];
unsigned int count=0,Return=0;

int main()
{
    scanf("%s%s%s%s",Name1_1,Name1_2,Name2_1,Name2_2);
    for(count=0;count<255;count++)
    {
        if(Name1_2[count]!=Name2_2[count])
        {
            Return=1;
            break;
        }
    }
    if(Return==1)
     printf("NOT");
    else
        printf("ARE Brothers");
    return 0;
}
