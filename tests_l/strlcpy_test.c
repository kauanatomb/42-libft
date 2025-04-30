#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

void test_with_valid_value() {
    char dst[20];
    const char *src = "Hello, world!";
    size_t dstsize = sizeof(dst);
    size_t result = ft_strlcpy(dst, src, dstsize);
    assert(result == 13); // Length of "Hello, world!" is 13 the null terminator doesnt count
    assert(strcmp(dst, "Hello, world!") == 0); // Check if the string was copied correctly
}

void test_with_small_dstsize() {
    char dst[5];
    const char *src = "Hello, world!";
    size_t dstsize = sizeof(dst);
    size_t result = ft_strlcpy(dst, src, dstsize);
    assert(result == 13); // Length of "Hello, world!" is 13 the null terminator doesnt count
    assert(strcmp(dst, "Hell") == 0); // Check if the string was truncated correctly
}
void test_with_zero_dstsize() {
    char dst[20];
    const char *src = "Hello, world!";
    size_t dstsize = 0;
    size_t result = ft_strlcpy(dst, src, dstsize);
    assert(result == 13); // Length of "Hello, world!" is 13 the null terminator doesnt count
    assert(dst[0] == '\0'); // Check if the destination string is empty
}
void test_with_empty_src() {
    char dst[20];
    const char *src = "";
    size_t dstsize = sizeof(dst);
    size_t result = ft_strlcpy(dst, src, dstsize);
    assert(result == 0); // Length of "" is 0 the null terminator doesnt count
    assert(strcmp(dst, "") == 0); // Check if the string was copied correctly
}
void test_with_large_dstsize() {
    char dst[20];
    const char *src = "Hello, world!";
    size_t dstsize = sizeof(dst) + 10; // Large dstsize
    size_t result = ft_strlcpy(dst, src, dstsize);
    assert(result == 13); // Length of "Hello, world!" is 13 the null terminator doesnt count
    assert(strcmp(dst, "Hello, world!") == 0); // Check if the string was copied correctly
}
// void test_with_null_src() {
//     char dst[20];
//     const char *src = NULL;
//     size_t dstsize = sizeof(dst);
//     size_t result = ft_strlcpy(dst, src, dstsize);
//     assert(result == 0); // Length of NULL is 0
//     assert(dst[0] == '\0'); // Check if the destination string is empty
// }
// void test_with_null_dst() {
//     const char *src = "Hello, world!";
//     size_t dstsize = 20;
//     size_t result = ft_strlcpy(NULL, src, dstsize);
//     assert(result == 14); // Length of "Hello, world!" is 13 + 1 for null terminator
// }

// commented out because the function should not accept NULL pointers

int main() {
    test_with_valid_value();
    test_with_small_dstsize();
    test_with_zero_dstsize();
    test_with_empty_src();
    test_with_large_dstsize();
    // test_with_null_src();
    // test_with_null_dst();
    printf("All tests passed!\n");
    return (0);
}