/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:18:59 by mipang            #+#    #+#             */
/*   Updated: 2024/12/01 23:56:08 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	i = 0;
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i ++;
	}
	dst[i] = '\0';
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*d;
	char	*s;

	s = "okcomputer";
	d = malloc((strlen(s) + 1) * sizeof(char));
	printf("%zu\n", ft_strlcpy(d, s, 5));
	printf("%s\n", d);
	free(d);
	return (0);
}*/
