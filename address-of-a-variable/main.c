/**
 * \file main.c
 * 
 * \brief Demonstrates how to get the address of a variable.
 *
 * As seen in the code we gan get the address of an variable. But the other way
 * around, setting the address of an variable is in general not possible. It
 * should however be noted that there are compiler extensions that do enables 
 * us to set an address of an variable but this is beyond the scope of this 
 * exercise.
 */
#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * \brief Entry point and only function of this program.
 * 
 * \return int 
 */
int main(void) {
    int variable = 42;
    int* variable_address = &variable;
    printf("0x%" PRIXPTR "\n", (uintptr_t)variable_address);
    return EXIT_SUCCESS;
}
