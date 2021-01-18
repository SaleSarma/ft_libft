/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svrcelj <svrcelj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 14:38:42 by svrcelj           #+#    #+#             */
/*   Updated: 2021/01/15 14:44:46 by svrcelj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	s_len;
	size_t	size;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	size = s_len <= start ? 1 : len + 1;
	i = 0;
	if (!(str = ft_calloc(size, sizeof(char))))
		return (0);
	if (size == 1)
	{
		str[0] = '\0';
		return (str);
	}
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
