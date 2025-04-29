#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

int main() {
    // Test for ft_toupper
    assert(ft_toupper('a') == 'A');
    assert(ft_toupper('z') == 'Z');
    assert(ft_toupper('A') == 'A');
    assert(ft_toupper('Z') == 'Z');
    assert(ft_toupper('1') == '1');
    assert(ft_toupper('!') == '!');
    assert(ft_toupper(0) == 0);
    assert(ft_toupper(-1) == -1);
    
    printf("All tests passed!\n");
    return (0);
}