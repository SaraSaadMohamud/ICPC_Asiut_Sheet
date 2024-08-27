#include <stdio.h>
#include <stdlib.h>
#define Max_Size 1000000
unsigned int Lines=0;
char String[Max_Size];
unsigned int Lenght=0;
int main()
{
    scanf("%i",&Lines);
    while(Lines--)
    {
        signed int Flag=-1;
        scanf("%s",String);
        Lenght=0;
        for(int Count=0 ; String[Count] !='\0' ;Count ++)
        {
             Lenght++;
        }
        for(int Count=0 ; Count <Lenght-2 ; Count++)
        {
            Flag=0;
          if(((String[Count]=='0' )&& (String[Count+1] == '1') && (String[Count+2] == '0')) ||
             ((String[Count] == '1') &&(String[Count+1] =='0') )&&(String[Count+2]=='1'))
        {
            Flag=1;
            break;
        }
        }
        if(Flag ==1)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }

    }
    return 0;
}
