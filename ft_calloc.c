/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktombola <ktombola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:47:56 by ktombola          #+#    #+#             */
/*   Updated: 2025/04/25 10:20:46 by ktombola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
		tmp[i++] = 0;
	return (tmp);
}
/*
#include <stdio.h>
int	main(void)
{
	size_t count = 5;
	size_t size = sizeof(int);

	int *arr1 = (int *)ft_calloc(count, size);
	int *arr2 = (int *)calloc(count, size);

	if (arr1 == NULL || arr2 == NULL)
	{
		printf("Error in memory allocation \n");
		return (1);
	}
	if (memcmp(arr1, arr2, count * size) == 0)
	{
		printf("Memory inicialization done correctly");
	}
	else
	{
		printf("Differences in results");
	}

	free(arr1);
	free(arr2);
	return (0);
}
*/
