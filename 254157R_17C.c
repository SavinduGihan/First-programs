#include <stdio.h>

int main()
{
    int item = 1;
    float price,amount = 0;

    do
    {
        printf("Enter the price of item number %d: ", item);
        scanf("%f", &price);

        if (price != 0)
        {
            amount += price;
            item++;
        }

    } while (price != 0);

    printf("The total amount is: %.2f\n", amount);

    return 0;
}