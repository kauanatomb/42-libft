#include <assert.h>
#include <string.h>
#include <stdio.h>
#include "../libft/libft.h"

void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *a = ft_lstnew(ft_strdup("1"));
	t_list *b = ft_lstnew(ft_strdup("2"));
	t_list *c = ft_lstnew(ft_strdup("3"));

	ft_lstadd_back(&a, b);
    ft_lstadd_back(&a, c);

	t_list *head = a;
	ft_lstclear(&head, del_content);

	assert(head == NULL);

    free(head);
    printf("All tests worked.\n");

	return (0);
}
