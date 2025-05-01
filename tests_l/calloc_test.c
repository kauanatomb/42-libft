#include <assert.h>
#include <stdio.h>
#include <limits.h>
#include "../libft/libft.h"

void test_calloc_basic_allocation()
{
    size_t count = 5;
    size_t size = sizeof(int);
    int *arr = ft_calloc(count, size);
    assert(arr != NULL);
    for (size_t i = 0; i < count; i++)
        assert(arr[i] == 0);
    printf("test_calloc_basic_allocation passed\n");
    free(arr);
}

void test_calloc_zero_size()
{
    void *ptr = ft_calloc(0, 0);
    assert(ptr != NULL);
    printf("test_calloc_zero_size passed\n");
    free(ptr);
}

void test_calloc_zero_count()
{
    void *ptr = ft_calloc(0, sizeof(int));
    assert(ptr != NULL);
    printf("test_calloc_zero_count passed\n");
    free(ptr);
}

void test_calloc_zero_element_size()
{
    void *ptr = ft_calloc(5, 0);
    assert(ptr != NULL);
    printf("test_calloc_zero_element_size passed\n");
    free(ptr);
}

void test_calloc_overflow()
{
    void *ptr = ft_calloc(SIZE_MAX, 2);
    assert(ptr == NULL);
    printf("test_calloc_overflow passed\n");
}

int main()
{
    test_calloc_basic_allocation();
    test_calloc_zero_size();
    test_calloc_zero_count();
    test_calloc_zero_element_size();
    test_calloc_overflow();
    printf("All tests passed!\n");
    return (0);
}
