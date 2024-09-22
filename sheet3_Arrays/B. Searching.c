#include <stdio.h>
int Max,position=-1;
int main()
{
   scanf("%i",&Max);
   long long Array[Max],Value;
   for( int i=0 ; i<Max ; i++ )
   {
       scanf("%lli",&Array[i]);
   }
   scanf("%lli",&Value);
   for(int i=0 ; i<Max ; i++)
   {
       if(Array[i]==Value)
       {
           position=i;
           break;
       }
   }
   printf("%i\n",position);
    return 0;
}
