/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svrcelj <svrcelj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 13:19:17 by svrcelj           #+#    #+#             */
/*   Updated: 2021/01/28 12:54:09 by svrcelj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		chr;

	i = 0;
	chr = (unsigned char)c;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == chr)
			return (((unsigned char*)s) + i);
		i++;
	}
	return (NULL);
}
