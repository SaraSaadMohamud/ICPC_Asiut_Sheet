#include <stdio.h>
unsigned int Max,j=0;
long long Sum=0;
int main()
{
    scanf("%i",&Max);
    char Array1[Max];
    scanf("%s",Array1);
    for(int i=0 ; i<Max ; i++)
    {
        Sum+=(Array1[i]-'0');
    }
    printf("%lli",Sum);
    return 0;
}
