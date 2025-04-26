/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktombola <ktombola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 09:20:08 by ktombola          #+#    #+#             */
/*   Updated: 2025/04/24 09:39:52 by ktombola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	p = 0;
	while (*s)
	{
		if (*s == c)
			p = s;
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return ((char *)p);
}
/*
#include <stdio.h>

int	main(void)
{
	char s[] = "kauanak";
	int c = '\0';
	printf("%s", ft_strrchr(s, c));
	return (0);
}
*/
