/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:05:44 by mipang            #+#    #+#             */
/*   Updated: 2024/12/03 01:49:16 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	t_list	*clear(t_list **result_lst, void *content, void (*del)(void *))
{
	if (content)
		del(content);
	ft_lstclear(result_lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result_lst;
	t_list	*in_result_lst;
	void	*content;

	result_lst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst -> content);
		if (!content)
			return (clear(&result_lst, NULL, del));
		in_result_lst = ft_lstnew(content);
		if (!in_result_lst)
			return (clear(&result_lst, content, del));
		ft_lstadd_back(&result_lst, in_result_lst);
		lst = lst -> next;
	}
	return (result_lst);
}
