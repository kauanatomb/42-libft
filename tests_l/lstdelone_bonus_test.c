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
	char *str = ft_strdup("hello");
	t_list *node = ft_lstnew(str);

	// Checking if the node is created correctly
	assert(strcmp(node->content, "hello") == 0);

	// Deleting the node
	ft_lstdelone(node, del_content);
    printf("Node deleted successfully.\n");

	return (0);
}
