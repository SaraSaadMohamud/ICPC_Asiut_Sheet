#include <stdio.h>
char Number1,Number2,operator1;
int main()
{
  scanf("%i\r%c\r%i",&Number1,&operator1,&Number2);
    switch(operator1)
    {
        case '>' :
         if(Number1>Number2)
            printf("Right");
        else
            printf("Wrong");
        break;
        case '<' :
            if(Number1<Number2)
            printf("Right");
           else
             printf("Wrong");
            break;
        case '=' :
            if(Number1==Number2)
           printf("Right");
        else
            printf("Wrong");
        break;
        default :
            printf("Invalid!!!");
    }
}
