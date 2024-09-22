#include <stdio.h>
#include <math.h>
long long A,B,C,D;
int main()
{
    scanf("%lli\r%lli\r%lli\r%lli",&A,&B,&C,&D);
    if((pow(A,B)) <= (pow(C,D)))
         printf("NO");
    else
       printf("YES");
    return 0;
}
