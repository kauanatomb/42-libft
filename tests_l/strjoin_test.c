#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

// both having values
void	test_both_has_values()
{
	const char *s1 = "Kauana";
	const char *s2 = "Tomb";
        char *res = ft_strjoin(s1, s2);
        assert(res != NULL);
        assert(strcmp(res, "KauanaTomb") == 0);
        assert(ft_strlen(res) == 10);
        free(res);
}
// with differents caracteres
void	test_special_chars()
{
	const char *s1 = "@#$%^&";
        const char *s2 = "*()_";
        char *res = ft_strjoin(s1, s2);
        assert(res != NULL);
        assert(strcmp(res, "@#$%^&*()_") == 0);
        assert(ft_strlen(res) == 10);
        free(res);
}

int main() {
	test_both_has_values();
	printf("All good 1!\n");
	test_special_chars();
	printf("All good 2!\n");
}
