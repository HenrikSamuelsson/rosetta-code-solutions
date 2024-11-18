#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#include "bitwise_operations.h"
#include "operands.h"

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c %c%c%c%c"
#define BYTE_TO_BINARY(byte)                                \
  ((byte)&0x80 ? '1' : '0'), ((byte)&0x40 ? '1' : '0'),     \
      ((byte)&0x20 ? '1' : '0'), ((byte)&0x10 ? '1' : '0'), \
      ((byte)&0x08 ? '1' : '0'), ((byte)&0x04 ? '1' : '0'), \
      ((byte)&0x02 ? '1' : '0'), ((byte)&0x01 ? '1' : '0')

static void display_result(char * operation_name, int result);

int main(void) {
  Operands ops; 
  scanf("%d%d", &ops.a, &ops.b);
  display_result("a", ops.a);
  display_result("b", ops.b);
  int a_and_b = bitwise_and(ops.a, ops.b);
  display_result("a AND b", a_and_b);
  int a_or_b = bitwise_or(ops.a, ops.b);
  display_result("a OR B", a_or_b);
  return EXIT_SUCCESS;
}

static void display_result(char * operation_name, int result) {
  printf("%s\t", operation_name);
  printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(result));
  printf(" (%d)", result);
  printf("\n");
}
