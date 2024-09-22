#include <stdio.h>
char Number;
int main()
{
    scanf("%i",&Number);
    for(int i=1;i<=Number;i++)
    {
        for(int k=Number ; k>i; k--)
        {
            printf(" ");
        }
        for(int j=i*3;j>i+1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=Number; i>=1;i--)
    {
         for(int k=Number ; k>i; k--)
        {
            printf(" ");
        }
        for(int j=i*3;j>i+1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
