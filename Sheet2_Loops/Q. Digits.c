#include <stdio.h>
int Number;
long long Number1;
int main()
{
  scanf("%i",&Number);
  while(Number)
  {
      scanf("%lli",&Number1);
      if(Number1==0)
        printf("0 ");
      for(long long i = Number1 ; i>0 ;i=i/10)
      {
          printf("%lli ",i%10);
      }
      printf("\n");
      Number--;
  }
    return 0;
}
