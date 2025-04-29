#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"

void test_equal_arrays() {
    char s1[] = "Hello, World!";
    char s2[] = "Hello, World!";
    
    int cmp = ft_memcmp(s1, s2, strlen(s1));
    assert(cmp == 0);
    printf("test_equal_arrays passed\n");
}

void test_different_arrays() {
    char s1[] = "Hello, World!";
    char s2[] = "Hello, Universe!";
    
    int cmp = ft_memcmp(s1, s2, 15);
    assert(cmp != 0);
    printf("test_different_arrays passed\n");
}

void test_partial_comparison() {
    char s1[] = "ABCDE";
    char s2[] = "ABCXY";

    int cmp = ft_memcmp(s1, s2, 3);
    assert(cmp == 0);
    printf("test_partial_comparison passed\n");
}

void test_zero_length() {
    char s1[] = "Test";
    char s2[] = "Fail";
    int cmp = ft_memcmp(s1, s2, 0);
    assert(cmp == 0);
    printf("test_zero_length passed\n");
}

int main() {
    test_equal_arrays();
    test_different_arrays();
    test_partial_comparison();
    test_zero_length();
    printf("All tests passed!\n");
    return (0);
}