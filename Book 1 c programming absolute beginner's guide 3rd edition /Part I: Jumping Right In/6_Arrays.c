// i need to learn this again after loops and more Practic

#include <stdio.h>
int main()
{

    // int array
    int a[5] = {1, 2, 3, 4, 5};
    printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);

    printf("\n");
    printf("\n");

    int b[5];
    b[0] = 1;
    b[1] = 2;
    b[2] = 3;
    b[3] = 4;
    b[4] = 5;
    printf("%d\n", b[1]);
    printf("%d\n", b[0]);
    printf("%d\n", b[2]);
    printf("%d\n", b[3]);
    printf("%d\n", b[4]);                                        

    printf("\n");
    printf("\n");

    //char array
    char c[5] = "vvss";
    printf("%c %c %c %c %c\n", c[0], c[1], c[2], c[3], c[4]);

    printf("\n");
    printf("\n");

    char d[5];
    d[0] = 'v';
    d[1] = 'v';
    d[2] = 's';
    d[3] = 's';
    d[4] = 's';
    printf("%c\n", d[1]);
    printf("%c\n", d[0]);
    printf("%c\n", d[2]);
    printf("%c\n", d[3]);
    printf("%c\n", d[4]);


    // line break
    printf("\n");
    printf("\n");


    // taking input in int using array

    int e[5];
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &e[0], &e[1], &e[2], &e[3], &e[4]);
    printf("%d %d %d %d %d\n", e[0], e[1], e[2], e[3], e[4]);

    // line break
    printf("\n");
    printf("\n");

    // taking input in char using array 
    char f[8];
    printf("Enter 8 characters: ");
    scanf("%c %c %c %c %c %c %c %c", &f[0], &f[1], &f[2], &f[3], &f[4], &f[5], &f[6], &f[7]);
    printf("You Typed = %c %c %c %c %c %c %c %c\n", f[0], f[1], f[2], f[3], f[4], f[5], f[6], f[7]);


    //  Find minimum and maximum element in an array
    int g[5] = {1, 2, 3, 4, 5};
    int min = g[0];
    int max = g[0];
    for (int i = 0; i < 5; i++)
    {
        if (g[i] < min)
        {
            min = g[i];
        }
        if (g[i] > max)
        {
            max = g[i];
        }
    }
    printf("Minimum element is %d\n", min);



/* Run of This Code

1 2 3 4 5


2
1
3
4
5


v v s s 


v
v
s
s
s


Enter 5 numbers: 2
2
2
2
2
2 2 2 2 2


Enter 8 characters: vikash singh
You Typed = 
 v i k a s h s
Minimum element is 1

*/

    return 0;
}