#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

int	main(void)
{
	// Case 1: empty list
	t_list *empty = NULL;
	assert(ft_lstsize(empty) == 0);
    printf("List size: %d\n", ft_lstsize(empty));

	// Case 2: list with 1 node
	t_list *a = ft_lstnew("one");
	assert(ft_lstsize(a) == 1);
    printf("List size: %d\n", ft_lstsize(a));

	// Case 3: list with 2 nodes
	t_list *b = ft_lstnew("two");
	t_list *c = ft_lstnew("three");
	a->next = b;
	b->next = c;
	assert(ft_lstsize(a) == 3);
    printf("List size: %d\n", ft_lstsize(a));

    free(c);
    free(b);
    free(a);
    printf("All tests worked.\n");

	return (0);
}
