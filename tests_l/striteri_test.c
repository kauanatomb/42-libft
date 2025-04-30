#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"

static void wrap_toupper(unsigned int i, char *c)
{
    (void)i;
    *c = (char)ft_toupper((int)*c);
}

static void add_index_iter(unsigned int i, char *c)
{
    *c = (char)(*c + i);
}

static void set_digit_iter(unsigned int i, char *c)
{
    *c = (char)('0' + i);
}

void test_uppercase()
{
    char s[] = "Hello, world!";
    ft_striteri(s, wrap_toupper);
    assert(strcmp(s, "HELLO, WORLD!") == 0);
    printf("test_uppercase passed\n");
}

void test_add_index()
{
    char s[] = "ABCDEF";
    ft_striteri(s, add_index_iter);
    assert(strcmp(s, "ACEGIK") == 0);
    printf("test_add_index passed\n");
}

void test_set_digit()
{
    char s[] = "XXXXXXXXXX";
    ft_striteri(s, set_digit_iter);
    assert(strcmp(s, "0123456789") == 0);
    printf("test_set_digit passed\n");
}

void test_empty_string()
{
    char s[] = "";
    ft_striteri(s, wrap_toupper);
    assert(strcmp(s, "") == 0);
    printf("test_empty_string passed\n");
}

void test_null_function()
{
    char s[] = "Test";
    ft_striteri(s, NULL);
    assert(strcmp(s, "Test") == 0);
    printf("test_null_function passed\n");
}

void test_null_string()
{
    ft_striteri(NULL, wrap_toupper);
    printf("test_null_string passed\n");
}

int main(void)
{
    test_uppercase();
    test_add_index();
    test_set_digit();
    test_empty_string();
    test_null_function();
    test_null_string();
    printf("All tests passed!\n");
    return (0);
}