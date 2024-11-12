#define _CRT_SECURE_NO_WARNINGS

#include "bitwise_operations.h"

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a;
  int b;
  scanf("%d%d", &a, &b);
  printf("%d", bitwise_and(a, b));
  return EXIT_SUCCESS;
}
