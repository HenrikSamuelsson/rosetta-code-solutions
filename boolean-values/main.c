#include <stdio.h>

#define SIZE 3

int main(void) {
  const int numbers[SIZE] = {42, 0, -42};
  for (size_t i = 0; i < SIZE; i++) {
    if (numbers[i]) {
      printf("%d equals true\n", numbers[i]);
    } else {
      printf("%d equals false\n", numbers[i]);
    }
  }
}
