#include <stdio.h>
#include <stdlib.h>
unsigned int Number=0;
int main()
{
    scanf("%i",&Number);
    int Size=Number-1;
    for(int Count1=0 ; Count1 <Number ;Count1++)
    {
      for(int Count=0 ; Count<Number ;Count++)
      {

          if(Count==Count1 )
          {
            if(Count1==(Number/2))
              {
                  printf("X");
              }
              else
              {
                  printf("\\");
              }
          }
          else if(Count== Size)
          {
              printf("\/");
          }
          else
          {
              printf("*");
          }
      }
      Size--;
      printf("\n");
    }
    return 0;
}
