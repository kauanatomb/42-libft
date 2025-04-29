#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

void test_fill_partial_buffer() {
    char buffer[10];
    ft_memset(buffer, 'A', 5);
    for (int i = 0; i < 5; i++)
        assert(buffer[i] == 'A');
    printf("test_fill_partial_buffer passed\n");
}

void test_fill_entire_buffer() {
    char buffer[5];
    ft_memset(buffer, 'B', sizeof(buffer));
    for (int i = 0; i < 5; i++)
        assert(buffer[i] == 'B');
    printf("test_fill_entire_buffer passed\n");
}

void test_zero_length() {
    char buffer[5] = {'X','X','X','X','X'};
    ft_memset(buffer, 'C', 0); 
    // Nothing expected
    for (int i = 0; i < 5; i++)
        assert(buffer[i] == 'X');
    printf("test_zero_length passed\n");
}

int main() {
    test_fill_partial_buffer();
    test_fill_entire_buffer();
    test_zero_length();

    printf("All tests passed!\n");
    return (0);
}