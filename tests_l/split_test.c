#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"

// Function auxiliar to free memory
void free_split(char **split)
{
    if (!split) return;
    for (int i = 0; split[i]; i++)
        free(split[i]);
    free(split);
}

void test_split_basic()
{
    // Arrange
    const char *input = "hello world split test";
    char separator = ' ';
    char *expected[] = {"hello", "world", "split", "test", NULL};

    // Act
    char **result = ft_split(input, separator);

    // Assert
    assert(result != NULL);
    for (int i = 0; expected[i]; i++) {
        assert(result[i] != NULL);
        assert(strcmp(result[i], expected[i]) == 0);
    }
    assert(result[4] == NULL);

    printf("test_split_basic passed\n");

    // Cleanup
    free_split(result);
}

void test_split_consecutive_separators()
{
    const char *input = "hello  world";
    char separator = ' ';
    char *expected[] = {"hello", "world", NULL};

    char **result = ft_split(input, separator);

    assert(result != NULL);
    for (int i = 0; expected[i]; i++) {
        assert(result[i] != NULL);
        assert(strcmp(result[i], expected[i]) == 0);
    }
    assert(result[2] == NULL);

    printf("test_split_consecutive_separators passed\n");

    free_split(result);
}

void test_split_start_end_separators()
{
    const char *input = "  hello world  ";
    char separator = ' ';
    char *expected[] = {"hello", "world", NULL};

    char **result = ft_split(input, separator);

    assert(result != NULL);
    for (int i = 0; expected[i]; i++) {
        assert(result[i] != NULL);
        assert(strcmp(result[i], expected[i]) == 0);
    }
    assert(result[2] == NULL);

    printf("test_split_start_end_separators passed\n");

    free_split(result);
}

void test_split_no_separator()
{
    const char *input = "helloworld";
    char separator = ',';
    char *expected[] = {"helloworld", NULL};

    char **result = ft_split(input, separator);

    assert(result != NULL);
    assert(strcmp(result[0], expected[0]) == 0);
    assert(result[1] == NULL);

    printf("test_split_no_separator passed\n");

    free_split(result);
}

void test_split_empty_string()
{
    const char *input = "";
    char separator = ' ';

    char **result = ft_split(input, separator);

    assert(result != NULL);
    assert(result[0] == NULL);

    printf("test_split_empty_string passed\n");

    free_split(result);
}

void test_split_null_input()
{
    const char *input = NULL;
    char separator = ' ';

    char **result = ft_split(input, separator);

    assert(result == NULL);

    printf("test_split_null_input passed\n");
}

void test_split_only_separators()
{
    const char *input = "     ";
    char separator = ' ';

    char **result = ft_split(input, separator);

    assert(result != NULL);
    assert(result[0] == NULL);

    printf("test_split_only_separators passed\n");

    free_split(result);
}

void test_split_separator_zero()
{
    const char *input = "hello";
    char separator = '\0';
    char *expected[] = {"hello", NULL};

    char **result = ft_split(input, separator);

    assert(result != NULL);
    assert(strcmp(result[0], expected[0]) == 0);
    assert(result[1] == NULL);

    printf("test_split_separator_zero passed\n");

    free_split(result);
}

int main()
{
    test_split_basic();
    test_split_consecutive_separators();
    test_split_start_end_separators();
    test_split_no_separator();
    test_split_empty_string();
    test_split_null_input();
    test_split_only_separators();
    test_split_separator_zero();

    printf("All ft_split tests passed!\n");
    return (0);
}

