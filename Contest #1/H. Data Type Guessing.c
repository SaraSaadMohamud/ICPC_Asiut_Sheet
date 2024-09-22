#include <stdio.h>
long long A,B,D;
int main()
{
   scanf("%lli %lli %lli",&A,&B,&D);
    if((A*B)%D !=0)
        printf("double");
    else if((A*B)/D> 2147483647)
        printf("long long");
    else
        printf("int");
    return 0;
}
