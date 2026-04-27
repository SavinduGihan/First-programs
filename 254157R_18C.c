#include <stdio.h>

int main()
{
    int itemNumber, quantity;
    int membership;
    float price, totalAmount = 0, discount = 0, netAmount;

    printf("How many items do you want to purchase? ");
    scanf("%d", &quantity);

    for (itemNumber = 1; itemNumber <= quantity; itemNumber++)
    {
        printf("Enter price of item %d: ", itemNumber);
        scanf("%f", &price);

        totalAmount += price;
    }

    printf("Do you have a membership? (1 for Yes, 0 for No): ");
    scanf("%d", &membership);

    if (membership == 1)
    {
        if (totalAmount > 5000)
        {
            discount = totalAmount * 15 / 100;
        }
        else
        {
            discount = totalAmount * 10 / 100;
        }
    }
    else if (membership == 0)
    {
        if (totalAmount > 5000)
        {
            discount = totalAmount * 7 / 100;
        }
        else
        {
            discount = 0;
        }
    }
    else
    {
        printf("Invalid membership input.\n");
        return 0;
    }

    netAmount = totalAmount - discount;

    printf("\nTotal amount: Rs. %.2f", totalAmount);
    printf("\nDiscount: Rs. %.2f", discount);
    printf("\nNet purchase amount: Rs. %.2f\n", netAmount);

    return 0;
}