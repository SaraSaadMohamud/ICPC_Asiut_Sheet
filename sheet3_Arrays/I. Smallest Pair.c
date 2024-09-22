#include <stdio.h>
int Max,Num_Element,case1=2,case2=1;
int main()
{
    scanf("%i",&Max);
    while (Max--)
    {
        scanf("%i",&Num_Element);
        long long Array[Num_Element],Minummum=9223372036854775807;
        for(int i= 0 ; i < Num_Element ; i++)
        {
            scanf("%lli",&Array[i]);
        }
        for(int i=0 ; i<Num_Element ; i++)
        {
                 for(int j=(i+1) ; j<Num_Element ; j++)
                {
                        if((Array[i] +Array[j]+case1-case2) < Minummum)
                        {
                            Minummum=(Array[i] +Array[j]+case1-case2);
                        }
                        case1++;
                }
           case2++;
           case1=(case2+1);
        }
        printf("%lli\n",Minummum);
        case1=2;
        case2=1;
    }
    return 0;
}
