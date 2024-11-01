#define _CRT_SECURE_NO_WARNINGS

#include "a_plus_b.h"

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a;
  int b;
  scanf("%d%d", &a, &b);
  printf("%d", a_plus_b(a, b));
  return EXIT_SUCCESS;
}

