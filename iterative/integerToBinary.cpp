//
// Copyright Caiden Sanders - All Rights Reserved
//
// Unauthorized copying of this file, via any medium is strictly prohibited.
// Proprietary and confidential.
//
// Written by Caiden Sanders <work.caidensanders@gmail.com>, March 18, 2024.
//

/**
 * Time Complexity: O(log n), where n is the value of the integer. The while
 * loop runs for the number of bits in the integer, which is proportional to the
 * logarithm of the number.
 *
 * Space Complexity: O(1), only a fixed amount of space is used for variables
 * regardless of the input size. The output string's size is proportional to the
 * number of bits in the input integer, but since the size of the output does
 * not count towards space complexity, it remains constant for the algorithm's
 * operations.
 */

#include <string>

/**
 * Pseudo Code
 *
 * function integerToBinary(integer) {
 *  binary = "";
 *
 *  while (integer is not 0) {
 *   binary = integer % 2 + binary;
 *   integer = integer / 2;
 *  }
 *
 *  return binary == "" ? "0" : binary;
 * }
 */

std::string integerToBinary(int integer) {
    // Initialize the binary string to an empty string.
    std::string binary = "";

    // While the integer is not 0, add the result of the integer modulo 2 to the
    // binary string and divide the integer by 2.
    while (integer != 0) {
        binary = std::to_string(integer % 2) + binary;
        integer /= 2;
    }

    // If the binary string is empty, return "0", otherwise return the binary
    // string.
    return binary == "" ? "0" : binary;
}