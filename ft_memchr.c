/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktombola <ktombola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:25:58 by ktombola          #+#    #+#             */
/*   Updated: 2025/04/24 11:15:32 by ktombola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	uc;

	uc = (unsigned char)c;
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == uc)
			return ((void *)str);
		n--;
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned char arr[] = {0x10, 0x20, 0x30, 0x40, 0x50};
	void *res1 = ft_memchr(arr, 0x30, 3);
	void *res2 = memchr(arr, 0x30, 3);
	printf("FT: %p | LIBC: %p\n", res1, res2);
}
*/
