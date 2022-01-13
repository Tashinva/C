#include <stdio.h>
int dowhileloop();
int whileloop();
int forloop();
int main()
{
    dowhileloop();
    whileloop();
    forloop();
    return 0;
}

int dowhileloop()
{
    int a = 0;
    do
    {
        printf("%d\n", a);
        a++;
    } while (a < 10);

    printf("---------------------------------\n");
    return 0;
}

int whileloop()
{
    int a = 0;
    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }

    printf("---------------------------------\n");
    return 0;
}

int forloop()
{
    int a = 0;
    for (a = 0; a < 10; a++)
    {
        printf("%d\n", a);
    }
}