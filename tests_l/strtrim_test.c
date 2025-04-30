#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

void test_basic_trim()
{
    char *s = ft_strtrim("  Hello, world!  ", " ");
    assert(s != NULL);
    assert(strcmp(s, "Hello, world!") == 0);
    free(s);
    printf("test_basic_trim passed\n");
}

void test_custom_set()
{
    char *s = ft_strtrim("--__42__--", "-_");
    assert(s != NULL);
    assert(strcmp(s, "42") == 0);
    free(s);
    printf("test_custom_set passed\n");
}

void test_no_trim()
{
    const char *orig = "NoTrimNeeded";
    char *s = ft_strtrim(orig, "");
    assert(s != NULL);
    assert(strcmp(s, orig) == 0);
    free(s);
    printf("test_no_trim passed\n");
}

void test_all_trimmed()
{
    char *s = ft_strtrim("xxxxxxx", "x");
    assert(s != NULL);
    assert(strcmp(s, "") == 0);
    free(s);
    printf("test_all_trimmed passed\n");
}

void test_empty_string()
{
    char *s = ft_strtrim("", "abc");
    assert(s != NULL);
    assert(strcmp(s, "") == 0);
    free(s);
    printf("test_empty_string passed\n");
}

void test_null_inputs()
{
    assert(ft_strtrim(NULL, " ") == NULL);
    assert(ft_strtrim("Hello", NULL) == NULL);
    printf("test_null_inputs passed\n");
}

int main(void)
{
    test_basic_trim();
    test_custom_set();
    test_no_trim();
    test_all_trimmed();
    test_empty_string();
    test_null_inputs();
    printf("All tests passed!\n");
    return (0);
}