#include <stdio.h>

int type1();
int type2();
int type3();
int type4();

int main()
{

    type1();
    return 0;
}

int type1()
{

    printf("\n------------int Normal------------------\n");
    int i = 9 / 4;
    printf("i : %d\n", i); // Output: 2

    printf("\n------------Float Normal------------------\n");
    float f1 = 9 / 4;
    printf("f1 : %f\n", f1); // Output: 2.250000

    printf("\n------------Type Casting Float Normal------------------\n");
    float f2 = (float)9 / 4;
    printf("f2 : %f\n", f2); // Output: 2.250000

    return 0;
}