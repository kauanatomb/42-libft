#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

void test_same_strings() {
    const char *s1 = "Hello, world!";
    const char *s2 = "Hello, world!";
    size_t n = 13;
    int result = ft_strncmp(s1, s2, n);
    assert(result == 0); // Strings are the same
}
void test_different_strings() {
    const char *s1 = "Hello, world!";
    const char *s2 = "Hello, World!";
    size_t n = 13;
    int result = ft_strncmp(s1, s2, n);
    assert(result != 0); // Strings are different
}
void test_different_length() {
    const char *s1 = "Hello, world!";
    const char *s2 = "Hello, world";
    size_t n = 13;
    int result = ft_strncmp(s1, s2, n);
    assert(result != 0); // Strings are different
}
int main() {
    test_same_strings();
    test_different_strings();
    test_different_length();

    printf("All tests passed!\n");
    return (0);
}