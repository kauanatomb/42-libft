#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

// test for strlcat

void test_with_valid_inputs() {
    char dest[20] = "Hello";
    const char *src = " World";
    size_t dstsize = sizeof(dest);

    size_t result = ft_strlcat(dest, src, dstsize);
    assert(result == 11); // "Hello World"
    assert(strcmp(dest, "Hello World") == 0);
}
void test_with_large_dstsize() {
    char dest[20] = "Hello";
    const char *src = " World";
    size_t dstsize = 100;

    size_t result = ft_strlcat(dest, src, dstsize);
    assert(result == 11); // "Hello World"
    assert(strcmp(dest, "Hello World") == 0);
}
void test_with_small_dstsize() {
    char dest[10] = "Hello";
    const char *src = " World";
    size_t dstsize = sizeof(dest);

    size_t result = ft_strlcat(dest, src, dstsize);
    assert(result == 11); // "Hello World"
    assert(strcmp(dest, "Hello Wor") == 0); // truncated
}
void test_with_empty_src() {
    char dest[20] = "Hello";
    const char *src = "";
    size_t dstsize = sizeof(dest);

    size_t result = ft_strlcat(dest, src, dstsize);
    assert(result == 5); // "Hello"
    assert(strcmp(dest, "Hello") == 0);
}
void test_with_empty_dest() {
    char dest[20] = "";
    const char *src = "World";
    size_t dstsize = sizeof(dest);

    size_t result = ft_strlcat(dest, src, dstsize);
    assert(result == 5); // "World"
    assert(strcmp(dest, "World") == 0);
}
void test_with_zero_dstsize() {
    char dest[20] = "Hello";
    const char *src = " World";
    size_t dstsize = 0;

    size_t result = ft_strlcat(dest, src, dstsize);
    printf("%s", dest);
    assert(result == 6); // " World", because if (dstsize <= dest_len) return (dstsize + src_len);
    assert(strcmp(dest, "Hello") == 0); // unchanged
}
int main() {
    test_with_valid_inputs();
    test_with_large_dstsize();
    test_with_small_dstsize();
    test_with_empty_src();
    test_with_empty_dest();
    test_with_zero_dstsize();

    printf("All tests passed!\n");
    return (0);
}