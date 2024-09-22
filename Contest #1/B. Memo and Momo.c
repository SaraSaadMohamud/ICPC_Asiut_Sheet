#include <stdio.h>
long long A,B,K;
int main()
{
    scanf("%lli\r%lli\r%lli",&A,&B,&K);
    if((A%K)==0 && (B%K)==0)
        printf("Both");
    else if((A%K)==0 && (B%K)!=0)
        printf("Memo");
    else if((B%K)==0 && (A%K)!=0)
        printf("Momo");
    else
        printf("No One");
    return 0;
}
