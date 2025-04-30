#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"

static char wrap_toupper(unsigned int i, char c)
{
    (void)i;
    return (char)ft_toupper((int)c);
}

static char wrap_tolower(unsigned int i, char c)
{
    (void)i;
    return (char)ft_tolower((int)c);
}

void test_basic_uppercase()
{
    char *res = ft_strmapi("Hello, world!", wrap_toupper);
    assert(res != NULL);
    assert(strcmp(res, "HELLO, WORLD!") == 0);
    free(res);
    printf("test_basic_uppercase passed\n");
}

void test_basic_to_lower()
{
    /* 'A'+0='A', 'B'+1='C', 'C'+2='E', ... */
    char *res = ft_strmapi("ABCDEF", wrap_tolower);
    assert(res != NULL);
    assert(strcmp(res, "abcdef") == 0);
    free(res);
    printf("test_basic_to_lower passed\n");
}

void test_empty_string()
{
    char *res = ft_strmapi("", wrap_toupper);
    assert(res != NULL);
    assert(strcmp(res, "") == 0);
    free(res);
    printf("test_empty_string passed\n");
}

void test_null_s_or_f()
{
    assert(ft_strmapi(NULL, wrap_toupper) == NULL);
    assert(ft_strmapi("Hello", NULL) == NULL);
    printf("test_null_s_or_f passed\n");
}

int main(void)
{
    test_basic_uppercase();
    test_basic_to_lower();
    test_empty_string();
    test_null_s_or_f();
    printf("All tests passed!\n");
    return (0);
}