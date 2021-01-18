/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svrcelj <svrcelj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 13:38:12 by svrcelj           #+#    #+#             */
/*   Updated: 2021/01/15 13:42:36 by svrcelj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	size_t	len;
	char	*str;

	str = (char*)string;
	len = ft_strlen(str);
	if (c == '\0')
		return (str + len);
	while (len--)
	{
		if (str[len] == c)
			return (&(*(str + len)));
	}
	return (0);
}
