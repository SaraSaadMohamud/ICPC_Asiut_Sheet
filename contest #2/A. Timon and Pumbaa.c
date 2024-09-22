#include <stdio.h>
long long Number1,Number2;
int main()
{
   scanf("%lli %lli",&Number1,&Number2);
   if(Number1>Number2)
    printf("%lli",Number1-Number2);
   else
    printf("0");
    return 0;
}
