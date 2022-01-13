#include <stdio.h>
int syantax1();
int table();
int table2();
int Example1();
int Example2(); // in condition ; ;  are must enter if condition not avavible but you must need to type this ; like  for(; i<5; i++)
int Example3();
int Example4();
int main()
{

    // syantax1();
    // table();
    // table2();
    // Example1();
    // Example2();
    // Example3();
    // Example4();     // Infinite Loop
    return 0;
}

int syantax1()
{
    printf("-----------------syantax1-----------------\n");
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
}

int table()
{
    printf("-----------------table-----------------\n");
    int table, c;
    printf("Enter the number of table = ");
    scanf("%d", &table);

    for (c = 1; c <= 10; c++)
    {
        printf("%d * %d = %d\n", table, c, table * c);
    }
}

int table2()
{
    printf("-----------------table2-----------------\n");
    int table;
    printf("Enter the number of table = ");
    scanf("%d", &table);

    for (int i = 1; i <= 10; i++)
    {
        int b;
        b = table * i;
        printf("%d * %d = %d\n", table, i, b);
    }
}

int Example1()
{
    printf("-----------------Example1-----------------\n");

    int a, b, c;
    for (a = 0, b = 12, c = 23; a < 2; a++)
    {
        printf("%d\n", a + b + c);
    }
}

int Example2()
{
    printf("-----------------Example1-----------------\n");

    int i = 1;
    for (; i < 5; i++)
    {
        printf("%d\n", i);
    }
}

int Example3()
{
    printf("-----------------Example1-----------------\n");

    int i;
    for (i = 0; i < 10; i++)
    {
        int i = 20;
        printf("%d\n", i);
    }
}

int Example4()
{
    printf("-----------------example4-----------------\n");

    for (;;)
    {
        printf("welcome to javatpoint");
    }
}
