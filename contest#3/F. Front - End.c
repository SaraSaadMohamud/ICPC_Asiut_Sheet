#include <stdio.h>
#include <stdlib.h>
int Max_Element;
int main()
{
    scanf("%i",&Max_Element);
    long long Array1[Max_Element],Array2[Max_Element],Max_1=(Max_Element-1),intial=-1;
    for(int i=0 ; i<Max_Element ; i++)
    {
        scanf("%lli",&Array1[i]);
    }
    for(int j=1 ; j<Max_Element ; j+=2)
    {
        Array2[j]=Array1[Max_1];
         Max_1=(Max_1-1);
    }
     for(int j=0 ; j<Max_Element ; j+=2)
    {
        intial+=1;
        Array2[j]=Array1[intial];
    }
     for(int i=0 ; i<Max_Element ; i++)
    {
        printf("%lli ",Array2[i]);
    }
    return 0;
}
