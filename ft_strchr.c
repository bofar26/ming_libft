/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:20:38 by mipang            #+#    #+#             */
/*   Updated: 2024/12/02 00:07:20 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (*str == '\0')
			return (NULL);
		str ++;
	}
	return ((char *)str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*dest;

	str = "okcomputer";
	dest = malloc(1 * sizeof(char));
	dest = ft_strchr(str, 112);
	printf("%s\n", dest);
	return (0);
}*/
