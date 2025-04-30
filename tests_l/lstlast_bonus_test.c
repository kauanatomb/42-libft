#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h" 

int	main(void)
{
	// Case 1: empty list
	t_list *empty = NULL;
	assert(ft_lstlast(empty) == NULL);

	// Case 2: list with one node
	t_list *a = ft_lstnew("only");
	assert(ft_lstlast(a) == a);
	assert(strcmp(ft_lstlast(a)->content, "only") == 0);
    printf("Last node content: %s\n", (char *)ft_lstlast(a)->content);

	// Case 3: list with multiple nodes
	t_list *b = ft_lstnew("middle");
	t_list *c = ft_lstnew("last");
	a->next = b;
	b->next = c;

	t_list *last = ft_lstlast(a);
	assert(last == c);
	assert(strcmp(last->content, "last") == 0);
    printf("Last node content: %s\n", (char *)last->content);

    free(c);
    free(b);
    free(a);
    printf("All tests worked.\n");

	return (0);
}
