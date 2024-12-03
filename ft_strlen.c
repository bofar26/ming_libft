/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:02:30 by mipang            #+#    #+#             */
/*   Updated: 2024/11/30 00:29:46 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	char	*str;

	str = "just do it.";
	printf("lenth of string : %d\n", ft_strlen(str));
	return (0);
}*/
