
/*Write a program for code p7*/

#include <stdio.h>

int main( void )

{
    int salary;
    int house_rent;
    int monthly_expenses;
    int money_saving;
    printf("Enter salary");
    scanf("%d",&salary);
    printf("Enter house rent");
    scanf("%d",&house_rent);
    printf("Enter monthly expenses");
    scanf("%d",&monthly_expenses);
    money_saving=salary-house_rent-monthly_expenses;
    printf("Amount of money he is saving is %d",money_saving);
    return 0;
}

