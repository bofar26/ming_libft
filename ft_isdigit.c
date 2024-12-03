/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:38:59 by mipang            #+#    #+#             */
/*   Updated: 2024/11/12 17:39:10 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <unistd.h>
int	main(void)
{
	int	c;

	c = '7';
	if (ft_isdigit(c) == 1)
		write(1, "it is a number.\n", 16);
	else
		write(1, "it is not a number.\n", 20);
	return (0);
}*/
