#include <stdio.h>

int main() {
    // Integer types
    int a = 10;
    short b = 20;
    long c = 30000;
    long long d = 4000000000;

    // Floating-point types
    float e = 3.14f;
    double f = 3.141592653589793;
    long double g = 3.141592653589793238L;

    // Character type
    char h = 'A';

    // Boolean (C99 onwards, requires stdbool.h)
    #include <stdbool.h>
    bool i = true;

    // Printing sizes and values
    printf("int: value = %d, size = %zu bytes\n", a, sizeof(a));
    printf("short: value = %d, size = %zu bytes\n", b, sizeof(b));
    printf("long: value = %ld, size = %zu bytes\n", c, sizeof(c));
    printf("long long: value = %lld, size = %zu bytes\n", d, sizeof(d));

    printf("float: value = %.2f, size = %zu bytes\n", e, sizeof(e));
    printf("double: value = %.15f, size = %zu bytes\n", f, sizeof(f));
    printf("long double: value = %.20Lf, size = %zu bytes\n", g, sizeof(g));

    printf("char: value = %c, size = %zu bytes\n", h, sizeof(h));
    printf("bool: value = %d, size = %zu bytes\n", i, sizeof(i));

    return 0;
}
