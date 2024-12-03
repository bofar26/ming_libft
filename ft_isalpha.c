/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:15:56 by mipang            #+#    #+#             */
/*   Updated: 2024/11/17 17:34:31 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
#include <unistd.h>
#include <ctype.h>
#include <stdio.h>
int	main(void)
{	
	int	c;

	c = '8';
	if (ft_isalpha(c) == isalpha(c))
		write(1, "match.\n", 7);
	else
		write(1, "not match.\n", 11);
	printf("ft : %d\n", ft_isalpha(c));
	printf("origin : %d\n", isalpha(c));//no need to return 1024.
	return (0);
}*/
