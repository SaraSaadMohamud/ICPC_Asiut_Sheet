#include <stdio.h>
int Max,Size,lenght=0;
long long Array[],Minum_Number;
int main()
{
    scanf("%i %i",&Max,&Size);
    for(int i=0 ; i < Max ; i++)
    {
        scanf("%lli",&Array[i]);
    }
    for(int k=Max ; k>0 ; k = k-Size)
    {
        Minum_Number = Array[lenght];
         for(int j=1 ;j <= Size ; j++)
              {
                  if(lenght < Max)
                     {
                         if(Array[lenght] < Minum_Number)
                         {
                              Minum_Number = Array[lenght];
                         }
                     }
                lenght++;
              }
        printf("%lli ",Minum_Number);
    }
    return 0;
}
