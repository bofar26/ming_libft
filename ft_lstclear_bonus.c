/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:51:05 by mipang            #+#    #+#             */
/*   Updated: 2024/12/02 23:14:17 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_move;

	if (!(*lst))
		return ;
	while ((*lst) != NULL)
	{
		lst_move = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = lst_move;
	}
}
