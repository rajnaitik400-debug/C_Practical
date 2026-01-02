#include <stdio.h>

int main() {
    int x = 5, a, b;

    a = ++x + 2;
    x = 5;
    b = x++ + 2;

    printf("Using pre-increment (++x): a = %d\n", a);
    printf("Using post-increment (x++): b = %d\n", b);

    return 0;
}
