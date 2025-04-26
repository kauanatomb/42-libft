/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktombola <ktombola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:01:43 by ktombola          #+#    #+#             */
/*   Updated: 2025/04/25 09:47:10 by ktombola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_isspace(int c);

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result *= sign);
}

static int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
	char *tests[] = { "42", "   42", "+42", "-42", "0", "0000123",
		"42abc", "  -0012a42", " +0000012345",
		"2147483647", "2147483648", "-2147483648", "-2147483649",
		"", "     ", "   +    1", "+-12", "--12", "++12", "-+12",
		"000000000000000000000000000000000001", "\t\n\v\f\r 42" };
	unsigned long i = 0;
	while (i < sizeof(tests)/sizeof(tests[0])) 
	{
		printf("Input: '%s'\n", tests[i]);
		printf("My atoi : %d\n", ft_atoi(tests[i]));
		printf("Std  atoi : %d\n\n", atoi(tests[i]));
		i++;
	}
	return 0;
}
*/
