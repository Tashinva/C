// We can use break statement in only two condition :
//  1. In switch statement
// 2. In nested loop

#include <stdio.h>
int Example1(); // Beack For Loop
int Example2();
int Example3(); // brack statment only brack one statment (Brack Statement can breack one layer Only)
int Example4();
int Example5(); // brack in while loop
int Example6(); // brack in do While Loop
int main()
{
    // Example1();
    // Example2();
    // Example3();
    // Example4();
    // Example5();
    Example6();
    return 0;
}

int Example1()
{
    printf("\n\n-----------Example 1 JavaTpoint -------------------\n");

    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d \n", i);
        if (i == 5)
            break;
    }
    printf("came outside of loop i = %d\n", i);

    printf("\n\n-----------Example 1 MyCode -------------------\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
        if (i == 5)
        {
            break;
        }
    }
    printf("%i\n", i);

    return 0;
}

int Example2()
{

    printf("\n\n-----------Example 2 javaTpoint -------------------\n");

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%d %d\n", i, j);
            if (i == 2 && j == 2) // && use for both condition are true
            {
                break;
            }
        }
    }
    return 0;
}

int Example3()
{
    printf("\n\n-----------Example 3 javaTpoint -------------------\n");
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d", i);
            if (i == 5 && j == 5)
            {
                break;
            }
        }
        printf("\n");
    }

    return 0;
}

int Example4()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%d %d ", i, j);
            if (i == 2 && j == 2)
            {
                break;
            }
        }
        printf("\n");
    }
}

int Example5()
{
    int i = 0;
    while (1)
    {
        printf("%d\n", i);
        if (i == 20)
        {
            break;
        }
        i++;
    }

    return 0;
}

int Example6()
{
    int n = 2, i, choice;
    do
    {
        i = 1;
        while (i <= 10)
        {
            printf("%d X %d = %d\n", n, i, n * i);
            i++;
        }
        printf("do you want to continue with the table of %d , enter any non-zero value to continue.", n + 1);
        scanf("%d", &choice);
        if (choice == 0)
        {
            break;
        }
        n++;
    } while (1);
    return 0;
}