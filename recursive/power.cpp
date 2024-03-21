//
// Copyright Caiden Sanders - All Rights Reserved
//
// Unauthorized copying of this file, via any medium is strictly prohibited.
// Proprietary and confidential.
//
// Written by Caiden Sanders <work.caidensanders@gmail.com>, March 18, 2024.
//

/**
 * Time Complexity: O(n), where n is the exponent. The recursion makes n calls
 * to itself, each time decreasing the exponent until it reaches 0.
 *
 * Space Complexity: O(n), as the recursive calls consume stack space. Each call
 * adds a new frame to the call stack until the base case is reached.
 */

/**
 * Pseudo Code
 *
 * function power(base, exponent) {
 *    if (exponent is 0) {
 *       return 1;
 *    }
 *
 *    return base * power(base, exponent - 1);
 * }
 */

int power(int base, int exponent) {
    // Base case, if the exponent is 0, return 1.
    if (exponent == 0) return 1;

    // Recursive case, multiply the base by the result of the recursive call
    // with the base and the exponent minus 1.
    return base * power(base, exponent - 1);
}