#include "a_plus_b.h"

#include <assert.h>
#include <stdlib.h>

int main(void) {
    assert(a_plus_b(2, 2) == 4);
    assert(a_plus_b(3, 2) == 5);
    return EXIT_SUCCESS;
}
