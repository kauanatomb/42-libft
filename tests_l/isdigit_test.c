#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

void test_isdigit_digits()
{
    for (int c = '0'; c <= '9'; c++) {
        assert(ft_isdigit(c) != 0);
    }
    printf("test_isdigit_digits passed\n");
}

void test_isdigit_nondigits()
{
    for (int c = 0; c < '0'; c++) {
        assert(ft_isdigit(c) == 0);
    }
    for (int c = '9' + 1; c < 256; c++) {
        assert(ft_isdigit(c) == 0);
    }
    printf("test_isdigit_nondigits passed\n");
}

int main()
{
    test_isdigit_digits();
    test_isdigit_nondigits();
    printf("All tests passed!\n");
    return (0);
}