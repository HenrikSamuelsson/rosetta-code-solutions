#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int a_plus_b(int a, int b);

int main(void) {
  int a;
  int b;
  scanf("%d%d", &a, &b);
  printf("%d", a_plus_b(a, b));
  return EXIT_SUCCESS;
}

int a_plus_b(int a, int b) { return a + b; }
