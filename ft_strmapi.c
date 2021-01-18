/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srmapi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svrcelj <svrcelj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:22:18 by svrcelj           #+#    #+#             */
/*   Updated: 2021/01/15 15:27:40 by svrcelj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*out;
	unsigned int	i;
	int				size;

	i = 0;
	if (!s || !f)
		return (NULL);
	size = ft_strlen((char*)s);
	if (!(out = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_strcpy(out, (char*)s);
	while (out[i])
	{
		out[i] = (*f)(i, out[i]);
		i++;
	}
	return (out);
}
