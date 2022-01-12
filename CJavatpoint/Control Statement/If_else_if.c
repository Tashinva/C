#include <stdio.h>
int main()
{

    int number1, number2, number3;

    //line break
    printf("\n");

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    printf("Enter the third number: ");
    scanf("%d", &number3);

    //line break
    printf("\n");

    printf("You Entered Number 1 = %d\nYou Entered Number 2 = %d\nYou Entered Number 3 = %d\n", number1, number2, number3);

    //line break
    printf("\n");




    // if statement

    if (number1 < number2) 
    {
        printf("%d is less than %d\n", number1, number2);
    }



    //if else statement
    if (number1 < number2) 
    {
        printf("%d is less than %d\n", number1, number2);
    }
    else
    {
        printf("%d is greater than %d\n", number1, number2);
    }


    //if else if statement
    if (number1>number2 && number1>number3) 
    {
        printf("%d is Bigger than %d and %d", number1, number2,number3);
    }
    else if (number2>number1 && number2>number3)
    {
        printf("%d is Grater than %d and %d\n", number2, number1,number3);
    }
    else
    {
        printf("%d is Grater than %d and %d\n", number3, number1,number2);
    }
    return 0;
}