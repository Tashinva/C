#include <stdio.h>
int whileloop1(); // simple While Loop Syantax
int whileloop2(); // Create Table using While Loop
int whileloop3(); // Afeter value of a variable is changed
int whileloop4(); // Condition become empty (n--;)
int whileloop5(); // Infinite Loop
int main()
{
        //  whileloop1();
       //  whileloop2();
      //  whileloop3();
     //  whileloop4();  
    //  whileloop5();   // Infinite Loop ___
    return 0;
}

int whileloop1()
{

    int i;
    i = 0;
    while (i < 10)
    {
        printf("%d\n", i);
        i++;
    }
}

int whileloop2()
{

    int table, c;
    c = 1;
    printf("Enter the number of table\n");
    scanf("%d", &table);

    while (c <= 10)
    {
        printf("%d * %d = %d\n", table, c, table * c);
        c++;
    }
}

int whileloop3()
{

    int j = 1;
    while (j += 2, j <= 10)
    {
        printf("%d\n", j);
    }
    printf("%d\n", j);
}

int whileloop4()
{
    int n = 10;
    while (n)
    {
        printf("%d\n", n);
        n--;
    }
}

int whileloop5()
{
    int i = 0;
    while (1)
    {
        printf("%d\n", i);
        i++;
    }
}
