#include <stdio.h>

int GOTO1();
int GOTO2();
int GOTO3();
int GOTO4();

int main()
{

    // GOTO1();  //code for creating table
    GOTO2(); // code for printing table using goto and for loop
    // GOTO3();
    // GOTO4();

    return 0;
}

int GOTO1()
{

    int num, i = 1;
    printf("Enter Table Number : ");
    scanf("%d", &num);
table:
    printf("%d x %d = %d\n", num, i, num * i);
    i++;
    if (i <= 10)
        goto table;

    return 0;
}

int GOTO2()
{
    int num, table;
    char C;
Table:
    printf("Enter Table Number : ");
    scanf("%d", &table);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", table, i, table * i);
    }
    printf("Do you want Another Table? (Y/N) : ");
    scanf(" %c", &C);

    if (C == 'Y' || C == 'y')
    {
        goto Table;
    }
    else
    {
        printf("Thank You For Using This Program");
    }

    return 0;
}