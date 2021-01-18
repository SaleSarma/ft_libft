/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svrcelj <svrcelj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:45:29 by svrcelj           #+#    #+#             */
/*   Updated: 2021/01/12 15:45:37 by svrcelj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		dsize;
	unsigned int		j;
	unsigned int		ssize;

	dsize = 0;
	while (dest[dsize] != '\0')
	{
		dsize++;
	}
	ssize = 0;
	while (src[ssize] != '\0')
	{
		ssize++;
	}
	if (size <= dsize)
		return (ssize + size);
	j = 0;
	while (src[j] != '\0' && j + dsize < size - 1)
	{
		dest[dsize + j] = src[j];
		j++;
	}
	dest[dsize + j] = '\0';
	return (dsize + ssize);
}
