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

/**
 * @brief Allocates memory for an array of `count` elements, each of size `size`,
 * and initializes all bytes to zero.
 * 
 * @param count The number of elements to allocate.
 * @param size The size of each element.
 * 
 * @return A pointer to the allocated memory, or NULL if the allocation fails.
 */

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
