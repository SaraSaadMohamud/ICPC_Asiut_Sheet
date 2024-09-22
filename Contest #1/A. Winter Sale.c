#include <stdio.h>
char discount_percentage;int Tshirt_after_discount;
int main()
{
    scanf("%i\r%i",&discount_percentage,&Tshirt_after_discount);
    printf("%0.2f",(Tshirt_after_discount*100)/(float)(100-discount_percentage));
    return 0;
}
