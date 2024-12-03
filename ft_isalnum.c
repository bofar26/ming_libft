/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:42:09 by mipang            #+#    #+#             */
/*   Updated: 2024/11/17 17:33:08 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
/*
#include <unistd.h>
int	main(void)
{
	int	c;

	c = 'a';
	if (ft_isalnum(c))
		write(1, "it is num or alpha\n", 19);
	else
		write(1, "it is neither num nor alpha\n", 28);
	return (0);
}*/
