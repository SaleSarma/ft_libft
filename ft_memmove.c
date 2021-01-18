/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svrcelj <svrcelj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 13:12:57 by svrcelj           #+#    #+#             */
/*   Updated: 2021/01/15 14:15:46 by svrcelj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == dest)
		return (dest);
	if (src < dest)
		while (n--)
			((char*)dest)[n] = ((char*)src)[n];
	else
		while (i < n)
		{
			((char*)dest)[i] = ((char*)src)[i];
			i++;
		}
	return (dest);
}
