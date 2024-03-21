# Recursion vs Iteration in C++

This repository demonstrates the concepts of recursion and iteration through the implementation of
three common programming problems in C++: converting an integer to a binary number, finding the
least common denominator (LCD) of an expression, and calculating the power of a number given a base
and an exponent. Both recursive and iterative approaches are explored, providing a basis for
comparing their efficiency in terms of time and space complexity.

## Table of Contents

- [Introduction](#introduction)
- [Problems and Solutions](#problems-and-solutions)
  - [Integer to Binary Conversion](#integer-to-binary-conversion)
  - [Finding the Least Common Denominator (LCD)](#finding-the-least-common-denominator-lcd)
  - [Power Calculation](#power-calculation)
- [Efficiency Comparison](#efficiency-comparison)
- [Usage](#usage)
- [How to Run](#how-to-run)
- [Contributing](#contributing)
- [License](#license)

## Introduction

In this project, we delve into the practical applications and theoretical underpinnings of recursion
and iteration. By implementing solutions to several problems using both approaches, we aim to shed
light on their respective strengths and limitations, particularly in terms of efficiency and code
readability.

## Problems and Solutions

### Integer to Binary Conversion

- **Recursive**: Breaks down the number by halving it until the base case is reached, then
  concatenates the remainders in reverse order.
- **Iterative**: Uses a loop to divide the number by two, collecting remainders to form the binary
  representation from the bottom up.

### Finding the Least Common Denominator (LCD)

- **Recursive**: Applies the Euclidean algorithm recursively to find the GCD, then computes the LCD
  using the relationship between two numbers and their GCD.
- **Iterative**: Implements the Euclidean algorithm through a loop to find the GCD, then calculates
  the LCD based on this value.

### Power Calculation

- **Recursive**: Calculates the power by multiplying the base by itself, decrementing the exponent
  until it reaches zero.
- **Iterative**: Utilizes a loop to repeatedly multiply the base for the number of times indicated
  by the exponent.

## Efficiency Comparison

The efficiency of recursive and iterative solutions can vary based on the specific problem and the
environment in which the code is executed. Generally, iterative solutions are more space-efficient,
as they do not add additional frames to the call stack. Recursion, on the other hand, can lead to a
more readable and concise code, especially for problems that are naturally recursive, like tree
traversals.

In our comparisons:

- **Integer to Binary Conversion**: The iterative approach is slightly faster due to the overhead of
  recursive calls.
- **Finding the LCD**: The iterative solution is more space-efficient, while both approaches offer
  similar time efficiency.
- **Power Calculation**: For large exponents, the iterative method is more space-efficient. However,
  the recursive method can be optimized using techniques like memoization to improve performance.

## Usage

This repository serves as an educational resource for understanding and comparing recursive and
iterative programming paradigms. Users can study the code to see how similar problems can be
approached from these two different perspectives.

## How to Run

1. Clone the repository to your local machine.
2. Choose the problem you want to run. Navigate to the appropriate directory (`recursive` or
   `iterative`).
3. Compile the C++ file using a command like `g++ -o program_name filename.cpp`.
4. Execute the compiled program by running `./program_name`.

## Contributing

Feel free to fork this repository and submit pull requests to contribute to this project. Whether
it's adding new problems, enhancing the existing solutions, or improving the documentation, all
contributions are welcome.

## License

This project is licensed under the MIT License. See the LICENSE file in the repository for more
details.
