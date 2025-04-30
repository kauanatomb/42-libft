#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

void test_isascii_valid_range()
{
    for (int c = 0; c <= 127; c++) {
        assert(ft_isascii(c) != 0);
    }
    printf("test_isascii_valid_range passed\n");
}

void test_isascii_invalid_range()
{
    for (int c = 128; c < 256; c++) {
        assert(ft_isascii(c) == 0);
    }
    printf("test_isascii_invalid_range passed\n");
}

int main()
{
    test_isascii_valid_range();
    test_isascii_invalid_range();
    printf("All tests passed!\n");
    return (0);
}