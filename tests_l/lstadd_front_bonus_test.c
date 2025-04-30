#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

int	main(void)
{
	t_list *a = ft_lstnew("first");
	t_list *b = ft_lstnew("second");

	t_list *head = a;
	ft_lstadd_front(&head, b);

	assert(head == b);
	printf("%s\n", (char *)head->content);                
	assert(head->next == a);           
	assert(strcmp(head->content, "second") == 0);
	assert(strcmp(head->next->content, "first") == 0);
	printf("All tests worked.\n");

	free(a);
	free(b);

	return (0);
}