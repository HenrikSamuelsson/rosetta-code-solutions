/**
 * \file main.c
 *
 * \brief Shows how to represent the boolean states true and false in the C
 * programming language.
 *
 * Not how everything that is zero maps to false and non-zero values maps to
 * true.
 */
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Entry point and only function of this program.
 *
 * \return int
 */
int main(void) {
  // Check integers.
  assert(false == (bool)0);
  assert(true == (bool)4);
  assert(true == (bool)-4);
  // Check real numbers.
  assert(false == (bool)0.0);
  assert(true == (bool)4.0);
  assert(true == (bool)-4.0);
  // Check characters.
  assert(false == (bool)'\0');
  assert(true == (bool)'0');
  assert(true == (bool)'4');
  assert(true == (bool)-'4');
  printf("All assertions passed.");
  return EXIT_SUCCESS;
}
