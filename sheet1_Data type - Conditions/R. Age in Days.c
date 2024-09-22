#include <stdio.h>
#include <stdlib.h>
unsigned int Birth;
int main()
{
    scanf("%i",&Birth);
    printf("%i years\n%i months\n%i days",(Birth/365),(Birth%365)/30,(Birth%365)%30);
}
