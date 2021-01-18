/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svrcelj <svrcelj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 14:30:25 by svrcelj           #+#    #+#             */
/*   Updated: 2021/01/15 14:32:35 by svrcelj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s);
	if (!(str = malloc(sizeof(char) * len + 1)))
		return (0);
	ft_strlcpy(str, s, len + 1);
	return (str);
}
