/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktombola <ktombola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:23:02 by ktombola          #+#    #+#             */
/*   Updated: 2025/04/24 12:11:08 by ktombola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (n > i && p1[i] == p2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (p1[i] - p2[i]);
}
/*
#include <stdio.h>

int main(void)
{
    unsigned char a[] = {0x10, 0x20, 0x30, 0x40, 0x50};
    unsigned char b[] = {0x10, 0x20, 0x30, 0x41, 0x50};
    unsigned char c[] = {0x10, 0x20, 0x30, 0x40, 0x50};
    unsigned char d[] = {0x10, 0x20, 0x30, 0x40, 0x00};
    unsigned char e[] = {0x10, 0x20, 0x30, 0x40, 0x51};

    printf("Test 1 (a vs b, 5): %d\n", ft_memcmp(a, b, 5)); // neg (0x40 < 0x41)
    printf("Test 2 (a vs c, 5): %d\n", ft_memcmp(a, c, 5)); // 0
    printf("Test 3 (a vs d, 5): %d\n", ft_memcmp(a, d, 5)); // pos (0x50 > 0x00)
    printf("Test 4 (a vs e, 4): %d\n", ft_memcmp(a, e, 4)); // 0
    printf("Test 5 (a vs e, 5): %d\n", ft_memcmp(a, e, 5)); // neg (0x50 < 0x51)

    return 0;
}
*/
