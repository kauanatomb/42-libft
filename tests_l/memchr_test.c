#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

void test_find_existing_char() {
    char buffer[] = "ABCDEFG";
    int c = 'C';
    char *result = ft_memchr(buffer, c, sizeof(buffer));
    assert(result == &buffer[2]);
    printf("test_find_existing_char passed\n");
}

void test_char_not_found() {
    char buffer[] = "ABCDEFG";
    int c = 'X';
    char *result = ft_memchr(buffer, c, sizeof(buffer));
    assert(result == NULL);
    printf("test_char_not_found passed\n");
}

void test_find_null_byte() {
    char buffer[8] = {'A','B','C','D','\0','F','G','\0'};

    char *result = ft_memchr(buffer, '\0', sizeof(buffer));
    assert(result == &buffer[4]);
    printf("test_find_null_byte passed\n");
}

int main() {
    test_find_existing_char();
    test_char_not_found();
    test_find_null_byte();
    printf("All tests passed!\n");
    return (0);
}