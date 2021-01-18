/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svrcelj <svrcelj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 13:25:14 by svrcelj           #+#    #+#             */
/*   Updated: 2021/01/15 15:01:08 by svrcelj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t size)
{
	unsigned char		*str1;
	unsigned char		*str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	if (str1 == str2 || size == 0)
		return (0);
	while (*str1 == *str2 && size - 1)
	{
		str1++;
		str2++;
		size--;
	}
	if (size)
		return (*str1 - *str2);
	return (0);
}
