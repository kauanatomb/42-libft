#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

void test_isalpha_alphabetic()
{
    for (int c = 'A'; c <= 'Z'; c++) {
        assert(ft_isalpha(c) != 0);
    }
    for (int c = 'a'; c <= 'z'; c++) {
        assert(ft_isalpha(c) != 0);
    }
    printf("test_isalpha_alphabetic passed\n");
}

void test_isalpha_non_alphabetic()
{
    for (int c = 0; c < 'A'; c++) {
        assert(ft_isalpha(c) == 0);
    }
    for (int c = 'Z' + 1; c < 'a'; c++) {
        assert(ft_isalpha(c) == 0);
    }
    for (int c = 'z' + 1; c < 256; c++) {
        assert(ft_isalpha(c) == 0);
    }
    printf("test_isalpha_non_alphabetic passed\n");
}

int main()
{
    test_isalpha_alphabetic();
    test_isalpha_non_alphabetic();
    printf("All tests passed!\n");
    return 0;
}
