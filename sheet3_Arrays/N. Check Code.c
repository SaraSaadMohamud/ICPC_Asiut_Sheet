#include <stdio.h>
#include <stdlib.h>
int Number1,Number2,flag=0;
int main()
{
    scanf("%i %i",&Number1,&Number2);
    char Array[Number1+Number2+1];
    scanf("%s",Array);
    for(int i=0 ; i<(Number1+Number2+1) ; i++)
    {
         if(Array[i]!='-')
                flag++;
    }
            if(('-'==Array[Number1])&&(flag==Number1+Number2))
                printf("Yes");
            else
                printf("No");
    return 0;
}
