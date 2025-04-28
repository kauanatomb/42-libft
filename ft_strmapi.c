/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktombola <ktombola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:33:54 by ktombola          #+#    #+#             */
/*   Updated: 2025/04/28 13:42:23 by ktombola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
  char	*str;
  size_t	i;

  if (!s || !f)
    return (NULL);
  str = malloc(sizeof(char) * (ft_strlen(s) + 1));
  if (!str)
    return (NULL);
  i = 0;
  while (s[i])
  {
    str[i] = f(i, s[i]);
    i++;
  }
  str[i] = '\0';
  return (str);
}
