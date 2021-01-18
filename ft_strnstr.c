/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svrcelj <svrcelj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 13:47:02 by svrcelj           #+#    #+#             */
/*   Updated: 2021/01/15 14:28:04 by svrcelj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t nb)
{
	size_t	i;
	size_t	j;
	char	*string;

	string = (char*)str;
	i = 0;
	j = 0;
	if (find[0] == '\0')
		return (string);
	while (string[i])
	{
		while (j < nb && find[j] == string[i + j])
		{
			if (ft_strlen(find) + i > nb)
			{
				return (0);
			}
			if (find[j + 1] == '\0' || j == nb)
				return (string + i);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
