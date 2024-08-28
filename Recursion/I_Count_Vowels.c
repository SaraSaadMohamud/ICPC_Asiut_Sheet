#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int Get_Vowel(char Arr[],int len);
int Count=0;
int main()
{
    char Arr[201];
    gets(Arr);
    int lenght=strlen(Arr);

    int Result = Get_Vowel(Arr,lenght-1);
    printf("%i\n",Result);

    return 0;
}
int Get_Vowel(char Arr[],int len)
{
   static int Count=0;
    if((Arr[len] == 'a')||(Arr[len] == 'e')||(Arr[len] == 'u')||(Arr[len] == 'i')||(Arr[len] == 'o')||
       (Arr[len] == 'A')||(Arr[len] == 'E')||(Arr[len] == 'U')||(Arr[len] == 'I')||(Arr[len] == 'O'))
    {
        Count++;
    }
    if(len >= 0)
    {
        Get_Vowel(Arr,len-1);
    }
    return(Count);
}
