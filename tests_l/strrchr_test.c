#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

void test_with_valid_input() {
    const char *str = "Hello, world!";
    int c = 'o';
    char *result = ft_strrchr(str, c);
    assert(result == str + 8); // 'o' is at index 8
}
void test_with_no_occurrence() {
    const char *str = "Hello, world!";
    int c = 'x';
    char *result = ft_strrchr(str, c);
    assert(result == NULL); // 'x' is not in the string
}
void test_with_empty_string() {
    const char *str = "";
    int c = 'a';
    char *result = ft_strrchr(str, c);
    assert(result == NULL); // 'a' is not in the empty string
}
void test_with_null_character() {
  const char *str = "Hello, world!";
  int c = '\0';
  char *result = ft_strrchr(str, c);
  printf("Expected: %p, Got: %p\n", (str + 13), result); // test ton see what it got
  assert(result == str + 13); 
}

int main() {
    test_with_valid_input();
    test_with_no_occurrence();
    test_with_empty_string();
    test_with_null_character();

    printf("All tests passed!\n");
    return (0);
}