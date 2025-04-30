#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

void test_isprint_printable_chars()
{
    for (int c = 32; c < 127; c++) {
        assert(ft_isprint(c) != 0);
    }
    printf("test_isprint_printable_chars passed\n");
}

void test_isprint_non_printable_chars()
{
    for (int c = 0; c < 32; c++) {
        assert(ft_isprint(c) == 0);
    }
    for (int c = 127; c < 256; c++) {
        assert(ft_isprint(c) == 0);
    }
    printf("test_isprint_non_printable_chars passed\n");
}

int main()
{
    test_isprint_printable_chars();
    test_isprint_non_printable_chars();
    printf("All tests passed!\n");
    return (0);
}