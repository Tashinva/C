#include <stdio.h>
int Example1();
int Example2();
int main()
{

    Example1();
    Example2(); //

    return 0;
}

int Example1()
{
    printf("\n-------------Eample2-----------------");

    char c;
    int choice, dummy;
    do
    {
        printf("\n1. Print Hello\n2. Print Javatpoint\n3. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Hello\n");
            break;
        case 2:
            printf("Javatpoint\n");
            break;
        case 3:
            exit(0); // this is new this will exit the program
            break;
        default:
            printf("please enter valid choice\n");
        }
        printf("do you want to enter more?");
        scanf("%d", &dummy);
        scanf("%c", &c);
    } while (c == 'y');
}

int Example2()
{
    printf("\n-------------Eample2-----------------");
    int a = 1;
    do
    {
        printf("%d\n", a);
        a++;
    } while (a < 10);

    return 0;
}