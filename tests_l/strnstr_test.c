#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

void test_valid_input() {
    const char *haystack = "Hello, world!";
    const char *needle = "world";
    size_t len = 13;
    char *result = ft_strnstr(haystack, needle, len);
    assert(result == haystack + 7); // "world" starts at index 7
}
void test_no_occurrence() {
    const char *haystack = "Hello, world!";
    const char *needle = "42";
    size_t len = 13;
    char *result = ft_strnstr(haystack, needle, len);
    assert(result == NULL); // "42" is not in the string
}
void test_empty_needle() {
    const char *haystack = "Hello, world!";
    const char *needle = "";
    size_t len = 13;
    char *result = ft_strnstr(haystack, needle, len);
    assert(result == haystack); // An empty needle should return the haystack
}
void test_needle_longer_than_haystack() {
    const char *haystack = "Hello";
    const char *needle = "Hello, world!";
    size_t len = 5;
    char *result = ft_strnstr(haystack, needle, len);
    assert(result == NULL); // Needle is longer than haystack
}
int main() {
    test_valid_input();
    test_no_occurrence();
    test_empty_needle();
    test_needle_longer_than_haystack();

    printf("All tests passed!\n");
    return (0);
}

