#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

int main() {
    // Test for ft_tolower
    assert(ft_tolower('A') == 'a');
    assert(ft_tolower('Z') == 'z');
    assert(ft_tolower('a') == 'a');
    assert(ft_tolower('z') == 'z');
    assert(ft_tolower('1') == '1');
    assert(ft_tolower('!') == '!');
    assert(ft_tolower(0) == 0);
    assert(ft_tolower(-1) == -1);
    assert(ft_tolower(' ') == ' ');
    assert(ft_tolower('\n') == '\n');
    printf("All tests passed!\n");
    return (0);
}