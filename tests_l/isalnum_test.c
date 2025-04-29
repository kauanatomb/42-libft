#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

void test_isalnum_alphanumeric()
{
    for (int c = '0'; c <= '9'; c++) {
        assert(ft_isalnum(c) != 0);
    }
    for (int c = 'A'; c <= 'Z'; c++) {
        assert(ft_isalnum(c) != 0);
    }
    for (int c = 'a'; c <= 'z'; c++) {
        assert(ft_isalnum(c) != 0);
    }
    printf("test_isalnum_alphanumeric passed\n");
}

void test_isalnum_non_alphanumeric()
{
    for (int c = 0; c < '0'; c++) {
        assert(ft_isalnum(c) == 0);
    }
    for (int c = '9' + 1; c < 'A'; c++) {
        assert(ft_isalnum(c) == 0);
    }
    for (int c = 'Z' + 1; c < 'a'; c++) {
        assert(ft_isalnum(c) == 0);
    }
    for (int c = 'z' + 1; c < 256; c++) {
        assert(ft_isalnum(c) == 0);
    }
    printf("test_isalnum_non_alphanumeric passed\n");
}

int main()
{
    test_isalnum_alphanumeric();
    test_isalnum_non_alphanumeric();
    printf("All tests passed!\n");
    return (0);
}