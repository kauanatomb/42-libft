#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

void	apply_toupper(void *content)
{
    char	*str = (char *)content;
    while (*str)
    {
        *str = ft_toupper(*str);
        str++;
    }
}

int	main(void)
{
	t_list *a = ft_lstnew(ft_strdup("hello"));
	t_list *b = ft_lstnew(ft_strdup("world"));
	a->next = b;

	ft_lstiter(a, apply_toupper);

	assert(strcmp((char *)a->content, "HELLO") == 0);
	assert(strcmp((char *)b->content, "WORLD") == 0);

	// cleanup
	ft_lstclear(&a, free);
	printf("All tests worked.\n");

	return (0);
}
