//
// Copyright Caiden Sanders - All Rights Reserved
//
// Unauthorized copying of this file, via any medium is strictly prohibited.
// Proprietary and confidential.
//
// Written by Caiden Sanders <work.caidensanders@gmail.com>, March 18, 2024.
//

/**
 * Time Complexity: O(log n), where n is the value of the integer. Each
 * recursive call divides the problem size by 2, leading to a logarithmic number
 * of calls.
 *
 * Space Complexity: O(log n), due to the call stack used by the recursive
 * calls. Each call adds a new level to the stack, with the depth of recursion
 * proportional to the number of bits in the input integer.
 */

#include <string>

/**
 * Pseudo Code
 *
 * function integerToBinary(integer) {
 *  if (integer is 0) {
 *    return "";
 *  }
 *
 *  return integerToBinary(integer / 2) + integer % 2;
 * }
 */

std::string integerToBinary(int integer) {
    // Base case, if the integer is 0, return an empty string.
    if (integer == 0) return "";

    // Recursive case, return the result of the recursive call with the integer
    // divided by 2 and the integer modulo 2.
    return integerToBinary(integer / 2) + std::to_string(integer % 2);
}