#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

void test_no_overlap() {
    char src[] = "Hello, World!";
    char dst[20];

    ft_memcpy(dst, src, sizeof(src));
    assert(strcmp(dst, src) == 0);
    printf("test_no_overlap passed\n");
}

void test_src_and_dst_are_same() {
    char buffer[] = "ABCDEFGHI";
    char *result;

    result = ft_memcpy(buffer, buffer, sizeof(buffer));
    assert(result == buffer);
    printf("test_src_and_dst_are_same passed\n");
}

void test_copy_partial() {
    char src[] = "Hello, World!";
    char dst[20];
    memset(dst, 0, sizeof(dst));

    ft_memcpy(dst, src, 5);
    assert(strncmp(dst, "Hello", 5) == 0);
    printf("test_copy_partial passed\n");
}

int main() {
    test_no_overlap();
    test_src_and_dst_are_same();
    test_copy_partial();
    printf("All tests passed!\n");
    return 0;
}