#include <stdio.h>

#define SIZE 3

int main(void) {
  const int integers[SIZE] = {-42, 0, 42};
  for (size_t i = 0; i < SIZE; i++) {
    if (integers[i]) {
      printf("%d equals true\n", integers[i]);
    } else {
      printf("%d equals false\n", integers[i]);
    }
  }
  const double decimals[SIZE] = {-1.0, 0.0, 1.0};
   for (size_t i = 0; i < SIZE; i++) {
    if (decimals[i]) {
      printf("%f equals true\n", decimals[i]);
    } else {
      printf("%f equals false\n", decimals[i]);
    }
  }
}
