#include <stdio.h>

void printMenu(int prices[])
{
    char *menu[] = {"Coffee", "Latte", "Mocha", "Cappuccino", "Quit"};

    printf("\t\t ****MENU**** \t\t\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d.%s   -   Rs-/%d\n", i + 1, menu[i], prices[i]);
    }
}

int calculateBill(int *latte, int *mocha, int *cappuccino, int *coffee, int choice, int *quantityC, int *quantityL, int *quantityM, int *quantityCa, int *totalBill, int prices[])
{
    while (1)
    {
        printMenu(prices);
        printf("\nEnter your choice (1-5) : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the quantity of Coffee : ");
            scanf("%d", quantityC);
            *coffee += *quantityC;
            *totalBill += (*quantityC) * 250; 
            break;

        case 2:
            printf("Enter the quantity of Latte : ");
            scanf("%d", quantityL);
            *latte += *quantityL;
            *totalBill += (*quantityL) * 300; 
            break;

        case 3:
            printf("Enter the quantity of Mocha : ");
            scanf("%d", quantityM);
            *mocha += *quantityM;
            *totalBill += (*quantityM) * 320; 
            break;

        case 4:
            printf("Enter the quantity of Cappuccino : ");
            scanf("%d", quantityCa);
            *cappuccino += *quantityCa;
            *totalBill += (*quantityCa) * 350; 
            break;

        case 5:
            printf("Exiting Menu");
            return 0;

        default:
            break;
        }
    }

    return 0;
}

void displayBalance(int totalBill, int customerMoney)
{
    int remainingBalance = customerMoney - totalBill;
    if (remainingBalance >= 0)
    {
        printf("Thank you for your order!\n");
        printf("Total Bill: Rs-/%d\n", totalBill);
        printf("Remaining Balance: Rs-/%d\n", remainingBalance);
    }
    else
    {
        printf("Insufficient funds. Please add more money.\n");
    }
}

int main()
{
    int choice, coffee = 0, latte = 0, mocha = 0, cappuccino = 0;
    int quantityC = 0, quantityL = 0, quantityM = 0, quantityCa = 0;
    int totalBill = 0; 
    int customerMoney;

    int prices[] = {250, 300, 320, 350};

    calculateBill(&latte, &mocha, &cappuccino, &coffee, choice, &quantityC, &quantityL, &quantityM, &quantityCa, &totalBill, prices);

    printf("\n\nTotal Bill: Rs-/%d\n", totalBill);

    printf("Enter the amount of money you have: Rs-/");
    scanf("%d", &customerMoney);

    displayBalance(totalBill, customerMoney);




    return 0;
}
