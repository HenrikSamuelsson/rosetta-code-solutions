#define _CRT_SECURE_NO_WARNINGS

#include "bitwise_operations.h"

#include <stdio.h>
#include <stdlib.h>

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c %c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  ((byte) & 0x80 ? '1' : '0'), \
  ((byte) & 0x40 ? '1' : '0'), \
  ((byte) & 0x20 ? '1' : '0'), \
  ((byte) & 0x10 ? '1' : '0'), \
  ((byte) & 0x08 ? '1' : '0'), \
  ((byte) & 0x04 ? '1' : '0'), \
  ((byte) & 0x02 ? '1' : '0'), \
  ((byte) & 0x01 ? '1' : '0') 

int main(void) {
  int a;
  int b;
  scanf("%d%d", &a, &b);
  printf("%d\t", a);
  printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(a));
  printf("\ta\n");
  printf("%d\t", b);
  printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(b));
  printf("\tb\n");
  int a_and_b = bitwise_and(a, b);
  printf("%d\t", a_and_b);
  printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(a_and_b));
  printf("\ta AND b\n");
  int a_or_b = bitwise_or(a, b);
  printf("%d\t", a_or_b);
  printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(a_or_b));
  printf("\ta OR b\n");
  return EXIT_SUCCESS;
}
