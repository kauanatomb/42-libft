#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "../libft/libft.h"

void test_zero()
{
    char *s = ft_itoa(0);
    assert(s != NULL);
    assert(strcmp(s, "0") == 0);
    free(s);
    printf("test_zero passed\n");
}

void test_positive()
{
    char *s = ft_itoa(12345);
    assert(s != NULL);
    assert(strcmp(s, "12345") == 0);
    free(s);
    printf("test_positive passed\n");
}

void test_negative()
{
    char *s = ft_itoa(-9876);
    assert(s != NULL);
    assert(strcmp(s, "-9876") == 0);
    free(s);
    printf("test_negative passed\n");
}

void test_int_max()
{
    char *s = ft_itoa(INT_MAX);
    char buf[32];
    sprintf(buf, "%d", INT_MAX);
    assert(s != NULL);
    assert(strcmp(s, buf) == 0);
    free(s);
    printf("test_int_max passed\n");
}

void test_int_min()
{
    char *s = ft_itoa(INT_MIN);
    char buf[32];
    sprintf(buf, "%d", INT_MIN);
    assert(s != NULL);
    assert(strcmp(s, buf) == 0);
    free(s);
    printf("test_int_min passed\n");
}

int main(void)
{
    test_zero();
    test_positive();
    test_negative();
    test_int_max();
    test_int_min();
    printf("All tests passed!\n");
    return 0;
}