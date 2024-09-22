#include <stdio.h>
#include <stdlib.h>
int Max_A,Max_B,i=0,j=0;
int main()
{
    scanf("%i %i",&Max_A,&Max_B);
    int Array_A[Max_A],Array_B[Max_B];
    for(int i=0 ; i<Max_A ; i++)
    {
        scanf("%i",&Array_A[i]);
    }
    for(int i=0 ; i<Max_B ; i++)
    {
        scanf("%i",&Array_B[i]);
    }
    while((i<Max_A)&&(j<Max_B))
    {
        if(Array_A[i] == Array_B[j])  //1 8 4 7 5 2 7   4 5 7 2
        {
            j++;
        }
        i++;
    }
    if(j == Max_B)
        printf("YES");
    else
        printf("NO");
    return 0;
}
