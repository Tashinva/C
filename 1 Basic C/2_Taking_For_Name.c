#include<stdio.h>
int main()
{

    printf("Hello World\n");
    printf("Enter your name: ");
    char name[20];

    scanf("%s", name);
    printf("Hello %s\n", name);

    return 0;
}