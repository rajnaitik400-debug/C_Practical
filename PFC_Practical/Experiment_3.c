#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.75f;
    char c = 'A';
    double d = 12.345678;

    printf("Value of int: %d\tSize: %lu bytes\n", a, sizeof(a));
    printf("Value of float: %.2f\tSize: %lu bytes\n", b, sizeof(b));
    printf("Value of char: %c\tSize: %lu bytes\n", c, sizeof(c));
    printf("Value of double: %.6lf\tSize: %lu bytes\n", d, sizeof(d));

    return 0;
}
