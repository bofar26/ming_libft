/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:53:58 by mipang            #+#    #+#             */
/*   Updated: 2024/11/17 16:57:56 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	offspace(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i ++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	b;
	int	output;

	i = offspace(str);
	b = 1;
	output = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			b = -1;
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		output = output * 10 + (str[i] - '0');
		i ++;
	}
	return (b * output);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s;
	int	origin;
	int	ft;

	s = "+22";
	origin = atoi(s);
	ft = ft_atoi(s);
	printf("%d\n", ft_atoi(s));
	printf("%d\n", atoi(s));
	return (0);
}*/
