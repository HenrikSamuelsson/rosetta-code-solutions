#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int variable = 42;
    int* variable_address = &variable;
    printf("0x%" PRIXPTR "\n", (uintptr_t)variable_address);
    return EXIT_SUCCESS;
}
