#include <stdio.h>
#include <stdlib.h>

void print_Fun(int Num);

int main()
{
    int Count=0;
    scanf("%i",&Count);

    print_Fun(Count);

    return 0;
}

void print_Fun(int Num)
{
     printf("I love Recursion\n");
     Num--;
     if(Num >0)
     {
          print_Fun(Num);
     }

}
