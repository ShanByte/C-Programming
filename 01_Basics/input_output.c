#include <stdio.h>

int main() 
{
    int num;
    float price;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Number: %d\nPrice: %f\n", num, price);
    return 0;
}
