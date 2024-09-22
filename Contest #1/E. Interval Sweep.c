#include <stdio.h>
char A,B;
int main()
{
    scanf("%i %i",&A,&B);
    if((A==B)&&(A!=0)&&(B!=0))
        printf("YES");
    else if ((A%2==0)&&(B%2!=0))
        {
            if(((A+B)/2==A))
                printf("YES");
            else
                printf("NO");
        }
    else if ((A%2!=0)||(B%2==0))
        printf("NO");
    return 0;
}
