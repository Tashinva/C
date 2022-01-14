#include <stdio.h>
int NestedLoop();       // Syntax only
int Example1();         // partan using For Loop
int Example2();         // Pattern using for Loop
int Example3();         // Pattern Using While Loop
int Example4(int, int); // Pattern using While Loop

int main()
{
    int row, col;
    printf("Enter the number of row : ");
    scanf("%d", &row);

    printf("Enter the number of column : ");
    scanf("%d", &col);

    // NestedLoop();
    // Example1();
    // Example2();
    // Example3();
    // Example4(row, col);
    return 0;
}

int NestedLoop()
{
    printf("----------Nested Loop----------\n");
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}

int Example1()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

int Example2()
{
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int Example3()
{
    printf("----------Pattern by While Loop----------\n");
    int i = 1, j, r, c;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    while (i <= r)
    {
        j = 1;
        while (j <= c)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}

int Example4(int row, int col)
{
    printf("----------Example 4 = Pattern by While Loop----------\n");
    int j = 1;
    do
    {
        int i = 1;

        do
        {
            i++;
            printf("* ");
        } while (i <= row);

        printf("\n");
        j++;
    } while (j <= col);

    return 0;
}
