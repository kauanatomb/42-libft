#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

// without overlap
void test_no_overlap() {
    char src[] = "Hello, World!";
    char dst[20];
    
    ft_memmove(dst, src, sizeof(src));
    assert(strcmp(dst, src) == 0);
    printf("test_no_overlap passed\n");
}

// Test with overlap (src before of dst)
void test_overlap_src_before_dst() {
    char buffer[] = "123456789";
    // Copy "12345" to buffer, starting in buffer+2
    ft_memmove(buffer + 2, buffer, 5);
    // Expected: "121234589"
    assert(strcmp(buffer, "121234589") == 0);
    printf("test_overlap_src_before_dst passed\n");
}

// Test with overlap (dst before of src)
void test_overlap_dst_before_src() {
    char buffer[] = "ABCDEFGHI";
    // Copy "CDEFG" to initial position
    ft_memmove(buffer, buffer + 2, 5);
    // Expected: "CDEFGHI"
    // Truncate comparing
    assert(strncmp(buffer, "CDEFG", 5) == 0);
    printf("test_overlap_dst_before_src passed\n");
}

int main() {
    test_no_overlap();
    test_overlap_src_before_dst();
    test_overlap_dst_before_src();
    printf("All tests passed!\n");
    return 0;
}