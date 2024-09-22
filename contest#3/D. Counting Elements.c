#include <stdio.h>
#include <stdlib.h>
int Max_element,Flag=0;
int main()
{
    scanf("%i",&Max_element);
    int ArrayA[Max_element];
    for(int i=0 ; i<Max_element ; i++)
    {
        scanf("%i",&ArrayA[i]);
    }
    for(int i=0 ; i<Max_element ; i++)
    {
        for(int j=0 ; j<Max_element ; j++)
        {
            if((ArrayA[i]+1) == ArrayA[j])
            {
                Flag++;
                break;
            }
        }
    }
    printf("%i",Flag);
    return 0;
}
