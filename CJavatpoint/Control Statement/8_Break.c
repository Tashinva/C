// We can use break statement in only two condition :
//  1. In switch statement
// 2. In nested loop

#include <stdio.h>
int Example1(); // Beack For Loop
int Example2();
int Example3();

int main()
{
    // Example1();
    Example2();
    // Example3();
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

    return 0;
}