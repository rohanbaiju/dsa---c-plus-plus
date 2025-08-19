// Sum, Difference, Product, Quotient, Remainder...

#include <stdio.h>   // HEADER FILES FIRST

int main()   // FUNCTION DECLARATION
{
    int x, y;
    printf("Enter two Numbers\n");
    scanf("%d%d", &x, &y);

    int a = x + y;
    printf("Sum is: %d\n", a);

    int b = x - y;
    printf("Difference is: %d\n", b);

    int c = x * y;
    printf("Product is: %d\n", c);

    int d = x / y;
    printf("Division is: %d\n", d);

    int m = x % y;
    printf("Remainder is: %d\n", m);

    printf("STRUCTURE DONE\n");

    return 0;
}
