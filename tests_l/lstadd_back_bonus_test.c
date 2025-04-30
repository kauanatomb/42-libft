#include <assert.h>
#include <string.h>
#include <stdio.h>
#include "../libft/libft.h"

int	main(void)
{
	// Case 1: empty list
	t_list *lst1 = NULL;
	t_list *new1 = ft_lstnew("first");
	ft_lstadd_back(&lst1, new1);
	assert(lst1 == new1);
	assert(lst1->next == NULL);

	// Case 2: list with one element
	t_list *lst2 = ft_lstnew("head");
	t_list *new2 = ft_lstnew("second");
	ft_lstadd_back(&lst2, new2);
	assert(lst2->next == new2);
	assert(new2->next == NULL);
    assert(strcmp(new2->content, "second") == 0);
    printf("Last node content: %s\n", (char *)ft_lstlast(lst2)->content);

	// Case 3: list with multiple elements
	t_list *new3 = ft_lstnew("third");
	ft_lstadd_back(&lst2, new3);
	assert(lst2->next->next == new3);
	assert(new3->next == NULL);
	assert(strcmp(new3->content, "third") == 0);
    printf("Last node content: %s\n", (char *)ft_lstlast(lst2)->content);

    free(new3);
    free(new2);
    free(lst2);
    free(new1);
    printf(" All tests worked.\n");

	return (0);
}
