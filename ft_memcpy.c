/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktombola <ktombola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:27:11 by ktombola          #+#    #+#             */
/*   Updated: 2025/04/23 19:53:41 by ktombola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*b_dst;
	unsigned char	*b_src;

	if (!src && !dst)
		return (dst);
	b_dst = (unsigned char *) dst;
	b_src = (unsigned char *) src;
	while (n > 0)
	{
		*(b_dst++) = *(b_src++);
		n--;
	}
	return (dst);
}
