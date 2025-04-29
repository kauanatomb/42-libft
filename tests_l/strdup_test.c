#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

// Test for ft_strdup
void test_strdup_normal() {
    const char *str = "Hello, World!";
    char *result = ft_strdup(str);
    assert(result != NULL);
    assert(strcmp(result, str) == 0);
    free(result);
}

void test_strdup_null() {
    char *result = ft_strdup(NULL);
    assert(result == NULL);
}

void test_strdup_empty() {
    const char *str = "";
    char *result = ft_strdup(str);
    assert(result != NULL);
    assert(strcmp(result, str) == 0);
    free(result);
}

int main() {
    test_strdup_normal();
    test_strdup_null();
    test_strdup_empty();

    printf("All tests worked!\n");
    return 0;
}

