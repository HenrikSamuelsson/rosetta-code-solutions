/**
 * \file bitwise_operations.c
 *
 * \brief Various bit manipulation functions.
 */

/**
 * \brief Bitwise AND.
 *
 * Compares each bit of the first operand to the corresponding bit of the second
 * operand. If both bits are 1, the corresponding result bit is set to 1. 
 * Otherwise, the corresponding result bit is set to 0.
 *
 * \param a First operand.
 * \param b Second operand.
 * \return int Result of bitwise AND.
 */
int bitwise_and(int a, int b) {
  int result;
  result = a & b;
  return result;
}

/**
 * \brief Bitwise OR.
 *
 * Compares each bit of the first operand to the corresponding bit of the second
 * operand. If both bits are 0, the corresponding result bit is set to 0.
 * Otherwise, the corresponding result bit is set to 0.
 *
 * \param a First operand.
 * \param b Second operand.
 * \return int Result of bitwise OR.
 */
int bitwise_or(int a, int b) {
  int result;
  result = a | b;
  return result;
}

/**
 * \brief Bitwise XOR.
 * 
 * Compares each bit of the first operand to the corresponding bit of the second
 * operand. If both bits are the same, the corresponding result bit is set to 0.
 * Otherwise, the corresponding result bit is set to 1.
 *
 * \param a First operand.
 * \param b Second operand.
 * \return int Result of bitwise XOR.
 */
int bitwise_xor(int a, int b) {
  int result;
  result = a ^ b;
  return result;
}
