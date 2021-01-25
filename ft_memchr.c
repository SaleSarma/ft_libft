/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svrcelj <svrcelj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 13:19:17 by svrcelj           #+#    #+#             */
/*   Updated: 2021/01/25 12:55:45 by svrcelj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char*)s;
	while (n--)
	{
		if (*temp != (unsigned char)c)
			temp++;
		else
			return (temp);
	}
	return (0);
}
