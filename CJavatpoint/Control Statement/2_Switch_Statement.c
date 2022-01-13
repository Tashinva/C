#include <stdio.h>
void SimpleExample1();
void SimpleExample1();
void SimpleExample2();
int SimpleExample3();
int SimpleExample4();
int main()
{
    SimpleExample0();
    SimpleExample1();
    SimpleExample2(); // this code showing same error but this function working if we change switch condition to normal condition like switch(a)
    SimpleExample3(); // without Breack Statement
    SimpleExample4(); // Nested switch case statement

    return 0;
}

void SimpleExample0()
{

    //switch statement
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    default:

        printf("Invalid number\n");
    }
    printf("\n------------------------------------------------\n\n");

}

void SimpleExample1()
{

    int number;
    printf("enter a number:");
    scanf("%d", &number);
    switch (number)
    {
    case 10:
        printf("number is equals to 10\n");
        break;
    case 50:
        printf("number is equal to 50\n");
        break;
    case 100:
        printf("number is equal to 100\n");
        break;
    default:
        printf("number is not equal to 10, 50 or 100\n");
    }
    printf("\n------------------------------------------------\n\n");
}

void SimpleExample2()
{

    int x = 5;
    int y = 10;

    switch (x > y && x + y > 0)
    {
    case 1:
        printf("Hi\n");
        break;
    case 0:
        printf("Hi\n");
        break;

    default:
        printf("Hello and Byy\n");
        break;
    }
    printf("\n------------------------------------------------\n\n");
}

int SimpleExample3()
{
    int number = 0;

    printf("enter a number:");
    scanf("%d", &number);

    switch (number)
    {
    case 10:
        printf("number is equal to 10\n");
    case 50:
        printf("number is equal to 50\n");
    case 100:
        printf("number is equal to 100\n");
    default:
        printf("number is not equal to 10, 50 or 100\n");
    }

    printf("\n------------------------------------------------\n\n");

    return 0;
}

int SimpleExample4()
{

    int i = 10, j = 20;

    switch (i)
    {
    case 10:
        printf("Hello Value if 10 for i\n");
    case 20:
        switch (j)
        {
        case 20:
            printf("Value is 20 for j\n");
        }
    }
    printf("\n------------------------------------------------\n\n");

    return 0;
}



