#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

// test for strchr
void is_a_valid_search()
{
    const char *str = "Hello, world!";
    int c = 'w';
    char *result = ft_strchr(str, c);
    assert(result == str + 7); // 'w' é o 7º caractere (0-based).
    printf("is_a_valid_search passed\n");
}

void test_char_not_found()
{
    const char *str = "Hello, world!";
    int c = 'x';
    char *result = ft_strchr(str, c);
    assert(result == NULL);
    printf("test_char_not_found passed\n");
}

void test_empty_string()
{
    const char *str = "";
    int c = 'H';
    char *result = ft_strchr(str, c);
    assert(result == NULL);
    printf("test_empty_string passed\n");
}

void test_null_terminator()
{
    const char *str = "Hello, world!";
    int c = '\0';
    char *result = ft_strchr(str, c);
    // '\0' deve estar no final da string (índice 13)
    assert(result == str + 13);
    printf("test_null_terminator passed\n");
}

int main()
{
    is_a_valid_search();
    test_char_not_found();
    test_empty_string();
    test_null_terminator();
    printf("All tests passed!\n");
    return (0);
}