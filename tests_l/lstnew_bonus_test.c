#include <assert.h>
#include <stdio.h>
#include "../libft/libft.h"

int main(void)
{
	int x = 42;
	t_list *node = ft_lstnew(&x);

	assert(node != NULL);                     
	assert(node->content == &x);               
	assert(*(int *)(node->content) == 42);     
	assert(node->next == NULL);                

	free(node); 
	printf("All tests worked.\n");

	return (0);
}