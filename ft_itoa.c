/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 00:27:55 by mipang            #+#    #+#             */
/*   Updated: 2024/12/03 15:26:13 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_len(int n)
{
	int		i;
	long	num;

	i = 1;
	num = (long)n;
	if (num < 0)
	{
		i ++;
		num = -num;
	}
	while (num >= 10)
	{
		i ++;
		num /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	i;
	int		len;

	len = count_len(n);
	i = (long)n;
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	ft_memset(result, 0, len + 1);
	result[len] = '\0';
	if (i < 0)
	{
		result[0] = '-';
		i = -i;
	}
	while (len > 0)
	{
		if (result[0] == '-' && len == 1)
			break ;
		result[len - 1] = (i % 10) + '0';
		i /= 10;
		len --;
	}
	return (result);
}
