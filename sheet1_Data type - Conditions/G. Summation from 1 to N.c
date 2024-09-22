#include <stdio.h>
#include <stdlib.h>
long long Number;
long long Summing=0;
long long count;

int main()
{
    scanf("%lli",&Number);
    for(count=1;count<=Number;count++)
    {
        Summing+=count;
    }
    printf("%lli\n",Summing);
    return 0;
}
