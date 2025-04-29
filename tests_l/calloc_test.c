#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"

void test_calloc_basic_allocation()
{
    size_t count = 5;
    size_t size = sizeof(int);
    int *arr = ft_calloc(count, size);
    assert(arr != NULL);

    for (size_t i = 0; i < count; i++) {
        assert(arr[i] == 0);
    }
    printf("test_calloc_basic_allocation passed\n");
    free(arr);
}

void test_calloc_zero_size()
{

    void *ptr = ft_calloc(0, 0);
    // Check if didnt broke
    assert(ptr != NULL);
    printf("test_calloc_zero_size passed\n");
    free(ptr);
}

int main()
{
    test_calloc_basic_allocation();
    test_calloc_zero_size();
    printf("All tests passed!\n");
    return 0;
}