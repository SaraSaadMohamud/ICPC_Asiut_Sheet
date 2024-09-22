#include <stdio.h>
#include <stdlib.h>
long long Number1;
long long Number2;

int main()
{
   scanf("%lli %lli",&Number1,&Number2);
   printf("%lli",(Number1%10)+(Number2%10));
    return 0;
}
