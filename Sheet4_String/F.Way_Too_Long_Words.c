#include <stdio.h>
#include <stdlib.h>
char string[100];
int Counter=0;
int main()
{
   scanf("%i",&Counter);
   while(Counter--)
   {
       int Lenght=0;
       scanf("%s",string);
       for(Lenght=0 ;Lenght<100;Lenght+=1)
       {
          if(string[Lenght]== '\0')
          {
              break;
          }
       }
       if(Lenght<=10)
       {
           printf("%s\n",string);
       }
       else
       {
           printf("%c%i%c\n",string[0],Lenght-2,string[Lenght-1]);
       }
   }
    return 0;
}
