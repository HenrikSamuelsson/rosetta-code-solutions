#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d%d", &a, &b);
    printf("sum: %d\n", a + b);
    printf("difference: %d\n", a - b);
    printf("product: %d\n", a * b);
    printf("integer quotient: %d\n", a / b);   // Truncates to a whole number.
    printf("remainder: %d\n", a % b);
    printf("exponentiation: %d\n", (int)pow(a, b));
    div_t result = div(a, b);
    printf("divmod: (%d, %d)\n", result.quot, result.rem);
    return EXIT_SUCCESS;
}
