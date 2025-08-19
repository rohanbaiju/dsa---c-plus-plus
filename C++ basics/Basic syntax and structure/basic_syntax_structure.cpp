// Sum, Difference, Product, Quotient, Remainder...

/*Basic I/O + Operators

👉 Write a program to input two numbers and print:

Sum, difference, product, quotient, remainder.

Compare them using relational operators (==, >, <, >=, <=, !=).*/

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

    if (x > y)
    printf("%d is greater than %d\n", x, y);

    if (x < y)
    printf("%d is greater than %d\n", y, x);

    if (x == y)
    printf("%d is equal to %d\n", x, y);


    printf("STRUCTURE DONE\n");

    return 0;
}
