#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"

void test_bzero_partial() {
    char buffer[10];
    ft_memset(buffer, 'A', sizeof(buffer));

    ft_bzero(buffer, 5);
    // the 5 first bytes should be 0
    for (int i = 0; i < 5; i++) {
        assert(buffer[i] == '\0');
    }
    // the last 5 should be A
    for (int i = 5; i < 10; i++) {
        assert(buffer[i] == 'A');
    }
    printf("test_bzero_partial passed\n");
}

void test_bzero_all() {
    char buffer[10];
    ft_memset(buffer, 'B', sizeof(buffer));

    ft_bzero(buffer, sizeof(buffer));
    // all memory should be allocated
    for (int i = 0; i < 10; i++) {
        assert(buffer[i] == '\0');
    }
    printf("test_bzero_all passed\n");
}

void test_bzero_zero_bytes() {
    // Shouldn change the buffer
    char buffer[5] = {'X','X','X','X','X'};
    ft_bzero(buffer, 0);

    for (int i = 0; i < 5; i++) {
        assert(buffer[i] == 'X');
    }
    printf("test_bzero_zero_bytes passed\n");
}

int main() {
    test_bzero_partial();
    test_bzero_all();
    test_bzero_zero_bytes();
    printf("All tests passed!\n");
    return (0);
}