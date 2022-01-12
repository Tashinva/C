#include <stdio.h>
int main()
{

    // Hello World
    printf("Hello World\n");

    //line break
    printf("\n");
    printf("\n");

    // add two numbers
    int a;
    a = 10;
    int b = 20;
    int c = a + b;
    printf("%d + %d = %d\n", a, b, c);

    //line break
    printf("\n");

    // simple interest calculation
    int principle, time, rate, simple_interest;

    printf("Enter the principle amount: ");
    scanf("%d", &principle);

    printf("Enter the time in years: ");
    scanf("%d", &time);

    printf("Enter the rate of interest: ");
    scanf("%d", &rate);

    simple_interest = (principle * time * rate) / 100;

    printf("The simple interest is: %d\n", simple_interest);

    //line break
    printf("\n");

    // simple share price calculation

    int share_price, no_of_shares, commission, total_amount;

    printf("Enter the share price: ");
    scanf("%d", &share_price);

    printf("Enter the number of shares: ");
    scanf("%d", &no_of_shares);

    printf("Enter the commission: ");
    scanf("%d", &commission);

    total_amount = share_price * no_of_shares + commission;

    printf("The total amount is: %d\n", total_amount);

    return 0;
}