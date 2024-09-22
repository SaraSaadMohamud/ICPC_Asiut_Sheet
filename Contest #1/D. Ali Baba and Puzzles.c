#include <stdio.h>
long long A,B,C,D;
int main()
{
    scanf("%lli\r%lli\r%lli\r%lli",&A,&B,&C,&D);
    if((A+B-C)==D || (A*B-C)==D ||
       (A*B+C)==D || (A-B+C)==D ||
       (A+B*C)==D || (A-B*C)==D ||
       (A+C-B)==D ||
       (A*C+B)==D || (A-C+B)==D ||
       (A+C*B)==D || (A-C*B)==D)
        printf("YES");
    else
        printf("NO");
    return 0;
}
