/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktombola <ktombola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:35:00 by ktombola          #+#    #+#             */
/*   Updated: 2025/04/22 17:42:35 by ktombola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*buffer;

	buffer = (unsigned char *) b;
	while (len > 0)
	{
		*(buffer++) = (unsigned char) c;
		len--;
	}
	return (b);
}
