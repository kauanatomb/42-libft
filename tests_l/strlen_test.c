#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

int main() {
    assert(ft_strlen("Hello, world!") == 13);
    assert(ft_strlen("") == 0);
    assert(ft_strlen("42") == 2);
    printf("All tests passed!\n");
    return (0);
}