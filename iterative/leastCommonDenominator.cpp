//
// Copyright Caiden Sanders - All Rights Reserved
//
// Unauthorized copying of this file, via any medium is strictly prohibited.
// Proprietary and confidential.
//
// Written by Caiden Sanders <work.caidensanders@gmail.com>, March 18, 2024.
//

/**
 * Time Complexity: O(log min(a, b)) for the gcd function, where a and b are the
 * numerator and denominator. This is because the Euclidean algorithm's time
 * complexity is proportional to the number of digits in the smaller number. For
 * lcm, the time complexity is dominated by the gcd calculation, so it remains
 * O(log min(a, b)).
 *
 * Space Complexity: O(1) for both gcd and lcm functions, as they use only a
 * constant amount of space regardless of the input sizes.
 */

/**
 * Pseudo Code
 *
 * function gcd(numerator, denominator) {
 *   while (denominator is not 0) {
 *    temp = denominator;
 *    denominator = numerator % denominator;
 *    numerator = temp;
 *   }
 *
 *   return numerator;
 * }
 *
 * function lcm(numerator, denominator) {
 *   return (numerator * denominator) / gcd(numerator, denominator);
 * }
 */

int gcd(int numerator, int denominator) {
    // The greatest common divisor is the remainder of the numerator divided by
    // the denominator until the denominator is 0.
    while (denominator != 0) {
        int temp = denominator;
        denominator = numerator % denominator;
        numerator = temp;
    }

    // Return the numerator when the denominator is 0.
    return numerator;
}

int lcm(int numerator, int denominator) {
    // The least common denominator is the product of the two numbers divided by
    // the greatest common divisor of the two numbers.
    return (numerator * denominator) / gcd(numerator, denominator);
}
