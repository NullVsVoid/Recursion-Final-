//
// Copyright Caiden Sanders - All Rights Reserved
//
// Unauthorized copying of this file, via any medium is strictly prohibited.
// Proprietary and confidential.
//
// Written by Caiden Sanders <work.caidensanders@gmail.com>, March 18, 2024.
//

/**
 * Time Complexity: O(log min(a, b)) for the gcd function, similar to the
 * iterative version. The recursive approach of the Euclidean algorithm has the
 * same efficiency. The lcm function's complexity is also O(log min(a, b)) as it
 * primarily depends on the gcd calculation.
 *
 * Space Complexity: O(log min(a, b)) for the gcd function due to the recursion
 * depth. For lcm, the space complexity is the same since it depends on the gcd
 * calculation.
 */

/**
 * Pseudo Code
 *
 * function gcd(numerator, denominator) {
 *   if (denominator is 0) {
 *     return numerator;
 *   }
 *
 *   return gcd(denominator, numerator % denominator);
 * }
 *
 * function lcm(numerator, denominator) {
 *   return (numerator * denominator) / gcd(numerator, denominator);
 * }
 */

int gcd(int numerator, int denominator) {
    // The greatest common divisor is the remainder of the numerator divided by
    // the denominator until the denominator is 0.
    if (denominator == 0) return numerator;

    // Return the result of the recursive call with the denominator and the
    // remainder of the numerator divided by the denominator.
    return gcd(denominator, numerator % denominator);
}

int lcm(int numerator, int denominator) {
    // The least common denominator is the product of the two numbers divided by
    // the greatest common divisor of the two numbers.
    return (numerator * denominator) / gcd(numerator, denominator);
}