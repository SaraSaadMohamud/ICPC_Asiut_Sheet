#include <stdio.h>
long long Eyes,Mouth,Body,A,B,C,D,E,F,G;
int main()
{
    scanf("%lli %lli %lli",&Eyes,&Mouth,&Body);
    if((Eyes>=1)&&(Body>=1))
    {
      if((Mouth>=Body)&&(Eyes>=Body))
      {
          C=Body;
          Eyes-=Body;
          Mouth-=Body;
          Body=0;
      }
      if((Body>=Mouth)&&(Eyes>=Mouth))
      {
          D=Mouth;
          Eyes-=Mouth;
          Body-=Mouth;
          Mouth=0;
      }
      if((Body>=Eyes)&&(Mouth>=Eyes))
      {
          E=Eyes;
          Body-=Eyes; // 358
          Mouth-=Eyes;// 51
          Eyes=0;
      }
       if(Body<=(Eyes/2))
        {
            A=Body;
            Eyes-=(Body*2);
            Body=0;
        }
        if(Body>=Eyes/2)
        {
            G=Eyes/2;
            Body-=(Eyes/2);
            Eyes=0;
        }
      if((Body<=(Eyes/2))&&(Mouth>=Body))
      {
          F=Body;
          Mouth-=Body;
          Eyes-=(Body*2);
          Body=0;
      }
        printf("%lli",A+B+C+D+E+F+G);
    }
    else
    {
        printf("0");
    }
    return 0;
}
