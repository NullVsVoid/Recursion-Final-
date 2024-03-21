//
// Copyright Caiden Sanders - All Rights Reserved
//
// Unauthorized copying of this file, via any medium is strictly prohibited.
// Proprietary and confidential.
//
// Written by Caiden Sanders <work.caidensanders@gmail.com>, March 18, 2024.
//

/**
 * Time Complexity: O(n), where n is the exponent. The loop runs n times to
 * calculate the power.
 *
 * Space Complexity: O(1), as the algorithm uses a fixed amount of space for the
 * loop variable and result calculation.
 */

/**
 * Pseudo Code
 *
 * function power(base, exponent) {
 *  result = 1;
 *
 *  for (every number from 0 to exponent) {
 *     result *= base;
 *  }
 *
 *  return result;
 * }
 */

int power(int base, int exponent) {
    // Initialize the result to 1.
    int result = 1;

    // Multiply the base by itself exponent times.
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    // Return the result.
    return result;
}