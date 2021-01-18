/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svrcelj <svrcelj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 12:45:34 by svrcelj           #+#    #+#             */
/*   Updated: 2021/01/15 14:14:11 by svrcelj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dest;
	if (!n || dest == src)
		return (dest);
	while (n--)
	{
		str2[i] = str1[i];
		i++;
	}
	return (dest);
}
