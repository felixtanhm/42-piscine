#include <stdio.h>
#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"

#define COLOR_GREEN "\033[0;32m"
#define COLOR_RED "\033[0;31m"
#define COLOR_RESET "\033[0m"

void print_test_result(const char* test_name, int condition, int nb, int result, int expected) {
    if (condition) {
        printf(COLOR_GREEN "[PASS]" COLOR_RESET " %s(%d) == %d\n", test_name, nb, result);
    } else {
        printf(COLOR_RED "[FAIL]" COLOR_RESET " %s(%d) != %d (expected: %d)\n", test_name, nb, result, expected);
    }
}

void print_test_result_power(const char* test_name, int condition, int nb, int power, int result, int expected) {
    if (condition) {
        printf(COLOR_GREEN "[PASS]" COLOR_RESET " %s(%d, %d) == %d\n", test_name, nb, power, result);
    } else {
        printf(COLOR_RED "[FAIL]" COLOR_RESET " %s(%d, %d) != %d (expected: %d)\n", test_name, nb, power, result, expected);
    }
}

void test_factorial(int nb, int expected) {
    int result = ft_iterative_factorial(nb); // Replace with actual function call
    print_test_result("[EX00] ft_iterative_factorial", result == expected, nb, result, expected);
}

void test_recursive_factorial(int nb, int expected) {
    int result = ft_recursive_factorial(nb); // Replace with actual function call
    print_test_result("[EX01] ft_recursive_factorial", result == expected, nb, result, expected);
}

void test_iterative_power(int nb, int power, int expected) {
    int result = ft_iterative_power(nb, power); // Replace with actual function call
    print_test_result_power("[EX02] ft_iterative_power", result == expected, nb, power, result, expected);
}

void test_recursive_power(int nb, int power, int expected) {
    int result = ft_recursive_power(nb, power); // Replace with actual function call
    print_test_result_power("[EX03] ft_recursive_power", result == expected, nb, power, result, expected);
}

void test_fibonacci(int index, int expected) {
    int result = ft_fibonacci(index); // Replace with actual function call
    print_test_result("[EX04] ft_fibonacci", result == expected, index, result, expected);
}

void test_sqrt(int nb, int expected) {
    int result = ft_sqrt(nb); // Replace with actual function call
    print_test_result("[EX05] ft_sqrt", result == expected, nb, result, expected);
}

void test_is_prime(int nb, int expected) {
    int result = ft_is_prime(nb); // Replace with actual function call
    print_test_result("[EX06] ft_is_prime", result == expected, nb, result, expected);
}

void test_find_next_prime(int nb, int expected) {
    int result = ft_find_next_prime(nb); // Replace with actual function call
    print_test_result("[EX07] ft_find_next_prime", result == expected, nb, result, expected);
}

int main()
{
    // Test cases for ft_iterative_factorial
    test_factorial(5, 120); // 5! = 120
    test_factorial(0, 1); // 0! = 1
    test_factorial(-1, 0); // Negative numbers should return 0
    test_factorial(1, 1); // 1! = 1

    // Test cases for ft_recursive_factorial
    test_recursive_factorial(5, 120); // 5! = 120
    test_recursive_factorial(0, 1); // 0! = 1
    test_recursive_factorial(-1, 0); // Negative numbers should return 0
    test_recursive_factorial(1, 1); // 1! = 1

    // Test cases for ft_iterative_power
    test_iterative_power(2, 3, 8); // 2^3 = 8
    test_iterative_power(2, 0, 1); // 2^0 = 1
    test_iterative_power(2, -1, 0); // Should return 0 for negative exponent
    test_iterative_power(-2, 3, -8); // (-2)^3 = -8
    test_iterative_power(-2, 2, 4); // (-2)^2 = 4

    // Test cases for ft_recursive_power
    test_recursive_power(2, 3, 8); // 2^3 = 8
    test_recursive_power(2, 0, 1); // 2^0 = 1
    test_recursive_power(2, -1, 0); // Should return 0 for negative exponent
    test_recursive_power(-2, 3, -8); // (-2)^3 = -8
    test_recursive_power(-2, 2, 4); // (-2)^2 = 4

    // Test cases for ft_fibonacci
    test_fibonacci(0, 0); // First Fibonacci number is 0
    test_fibonacci(1, 1); // Second Fibonacci number is 1
    test_fibonacci(2, 1); // Third Fibonacci number is 1
    test_fibonacci(3, 2); // Fourth Fibonacci number is 2

    // Test cases for ft_sqrt
    test_sqrt(16, 4); // Square root of 16 is 4
    test_sqrt(17, 0); // 17 is not a perfect square, so function should return 0
    test_sqrt(0, 0); // Square root of 0 is 0
    test_sqrt(1, 1); // Square root of 1 is 1
    test_sqrt(-4, 0); // Function should return 0 for negative numbers
    test_sqrt(25, 5); // Square root of 25 is 5
    test_sqrt(36, 6); // Square root of 36 is 6
    test_sqrt(49, 7); // Square root of 49 is 7

    // Test case 1: Testing a prime number
    test_is_prime(2, 1); // Expected to pass
    // Test case 2: Testing a non-prime number
    test_is_prime(4, 0); // Expected to pass
    // Test case 3: Testing a large prime number
    test_is_prime(29, 1); // Expected to pass
    // Test case 4: Testing a negative number
    test_is_prime(-3, 0); // Expected to pass
    // Test case 5: Testing 0 and 1
    test_is_prime(0, 0); // Expected to pass
    test_is_prime(1, 0); // Expected to pass
	test_is_prime(2147483647, 0); // Expected to pass
    test_is_prime(-2147483647, 0); // Expected to pass


    // Test case 1: Testing next prime after a prime number
    test_find_next_prime(2, 2); // Expected to pass
    // Test case 2: Testing next prime after a non-prime number
    test_find_next_prime(8, 11); // Expected to pass
    // Test case 3: Testing next prime after a large number
    test_find_next_prime(29, 29); // Expected to pass
    // Test case 4: Testing with a number less than 2
    test_find_next_prime(1, 2); // Expected to pass
    // Test case 5: Testing with 0
    test_find_next_prime(0, 2); // Expected to pass
    test_find_next_prime(-3, 2); // Expected to pass
    test_find_next_prime(-13, 2); // Expected to pass
    test_find_next_prime(2147483647, 2147483647); // Expected to pass
    test_find_next_prime(-2147483647, 2); // Expected to pass


    return 0;
}
