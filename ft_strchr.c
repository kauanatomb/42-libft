/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktombola <ktombola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 08:50:58 by ktombola          #+#    #+#             */
/*   Updated: 2025/04/24 09:18:27 by ktombola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == *s)
		return ((char *)s);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char s[] = "Kauana";
	int c = 'n';
	printf("%s", ft_strchr(s, c));
	return (0);
}
*/
