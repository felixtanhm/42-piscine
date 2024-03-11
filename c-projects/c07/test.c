#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
#include "ex03/ft_strjoin.c"

#define COLOR_GREEN "\033[0;32m"
#define COLOR_RESET "\033[0m"
#define COLOR_RED "\033[0;31m"

void print_array(int *arr, int size) {
    if (arr == NULL) {
        printf("NULL\n");
        return;
    }
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

// ex00 start
int strings_are_equal(char *s1, char *s2) {
    if (s1 == NULL || s2 == NULL) {
        return s1 == s2;
    }
    return strcmp(s1, s2) == 0;
}

void print_test_result_strdup(const char* test_name, char *input) {
    char *result = ft_strdup(input);
    int condition = strings_are_equal(input, result);

    if (condition) {
        printf(COLOR_GREEN "[EX00] PASS" COLOR_RESET " %s(\"%s\")\n", test_name, input);
    } else {
        printf(COLOR_RED "[EX00] FAIL" COLOR_RESET " %s(\"%s\") (duplicated incorrectly)\n", test_name, input);
    }
    free(result);
}
// ex00 end

// ex01 start
void test_ft_range(const char* test_name, int min, int max, int *expected, int expected_size) {
    int *result = ft_range(min, max);
    int success = 0;

    if (min >= max) {
        if (result == NULL && expected == NULL) success = 1; // Correctly handling NULL for invalid ranges
    } else {
        int result_size = max - min;
        success = 1; // Assume success
        for (int i = 0; i < result_size; i++) {
            if (result[i] != expected[i]) {
                success = 0; // Found a mismatch
                break;
            }
        }
    }

    if (success) {
        printf(COLOR_GREEN "[EX01] PASS" COLOR_RESET " %s: Range [%d, %d)\n", test_name, min, max);
    } else {
        printf(COLOR_RED "[EX01] FAIL" COLOR_RESET " %s: Range [%d, %d) did not match expected.\n", test_name, min, max);
        printf("Expected: ");
        print_array(expected, expected_size);
        printf("Got: ");
        print_array(result, max - min); // This line could potentially print garbage values if result is NULL and min < max
    }
    free(result);
}
// ex01 end

// ex02 start
void test_ft_ultimate_range(const char* test_name, int min, int max, int expected_size) {
    int *range = NULL;
    int actual_size = ft_ultimate_range(&range, min, max);
    int success = 1; // Assume success

    // Check for correct size
    if (actual_size != expected_size) {
        success = 0;
    }

    // Check for correct content if size is positive
    if (expected_size > 0) {
        for (int i = 0; i < actual_size; i++) {
            if (range[i] != (min + i)) {
                success = 0;
                break;
            }
        }
    } else if (expected_size == 0 && range != NULL) {
        // For a zero-sized range, range should still be NULL
        success = 0;
    }

    if (success) {
        printf(COLOR_GREEN "[EX02] PASS" COLOR_RESET " %s: Range [%d, %d) Size: %d\n", test_name, min, max, actual_size);
    } else {
        printf(COLOR_RED "[EX02] FAIL" COLOR_RESET " %s: Range [%d, %d) Incorrect. Expected Size: %d, Got: %d\n", test_name, min, max, expected_size, actual_size);
    }

    // Free the allocated range to avoid memory leaks
    free(range);
}
// ex02 end

// ex03 start
void test_ft_strjoin(char *test_description, int size, char **strs, char *sep, char *expected) {
    char *result = ft_strjoin(size, strs, sep);
    if (strcmp(result, expected) == 0) {
        printf(COLOR_GREEN "[EX03] PASS: " COLOR_RESET "%s\n", test_description);
    } else {
        printf(COLOR_RED "[EX03] FAIL: " COLOR_RESET "%s\n - Expected: '%s'\n - Got:      '%s'\n", test_description, expected, result);
    }
    free(result); // Remember to free the memory to prevent memory leaks
}
// ex03 end

int main(void) {
    // ex00 - Test with a normal string / empty string
    print_test_result_strdup("ft_strdup", "Hello, World!");
    print_test_result_strdup("ft_strdup", "");

    // ex01
    int expected1[] = {1, 2, 3, 4};
    test_ft_range("Normal range", 1, 5, expected1, 4);
    int expected2[] = {-3, -2, -1};
    test_ft_range("Negative range", -3, 0, expected2, 3);
    int expected3[] = {-2, -1, 0, 1, 2};
    test_ft_range("Zero-inclusive range", -2, 3, expected3, 5);
    test_ft_range("Equal min and max", 5, 5, NULL, 0);
    test_ft_range("Min greater than max", 10, 5, NULL, 0);

    // ex02
    test_ft_ultimate_range("Normal range", 1, 5, 4);
    test_ft_ultimate_range("Negative range", -3, 2, 5);
    test_ft_ultimate_range("Zero-inclusive range", -2, 3, 5);
    test_ft_ultimate_range("Equal min and max", 5, 5, 0);
    test_ft_ultimate_range("Min greater than max", 10, 5, 0);

    // ex03
    char *test1_strs[] = {"Hello", "world", "this", "is", "C"};
    char *test1_sep = " ";
    char *test1_expected = "Hello world this is C";
    test_ft_strjoin("Joining with space separator", 5, test1_strs, test1_sep, test1_expected);

    char *test2_strs[] = {"2023", "03", "11"};
    char *test2_sep = "-";
    char *test2_expected = "2023-03-11";
    test_ft_strjoin("Joining with dash separator", 3, test2_strs, test2_sep, test2_expected);

    char *test3_strs[] = {"One", "Two", "Three"};
    char *test3_sep = "";
    char *test3_expected = "OneTwoThree";
    test_ft_strjoin("Joining with empty separator", 3, test3_strs, test3_sep, test3_expected);

    char *test4_strs[] = {};
    char *test4_sep = ", ";
    char *test4_expected = "";
    test_ft_strjoin("Joining zero strings", 0, test4_strs, test4_sep, test4_expected);

    return 0;
}
