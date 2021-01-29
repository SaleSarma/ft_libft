/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svrcelj <svrcelj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 13:30:47 by svrcelj           #+#    #+#             */
/*   Updated: 2021/01/28 12:35:27 by svrcelj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *current;

	current = *lst;
	if (!del)
		return ;
	while (current->next)
	{
		del((*lst)->content);
		current = *lst;
		*lst = current->next;
		free(current);
	}
	*lst = NULL;
}
