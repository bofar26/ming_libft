/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:47:11 by mipang            #+#    #+#             */
/*   Updated: 2024/12/02 00:06:31 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	if (size <= len_dst)
		return (size + len_src);
	else
	{
		i = 0;
		while ((len_dst + i) < (size - 1) && src[i] != '\0')
		{
			dst[len_dst + i] = src[i];
			i ++;
		}
		dst[len_dst + i] = '\0';
	}
	return (len_dst + len_src);
}
/*
#include <stdio.h>

int	main(void)
{
	char	d[20] = "ok";
	char	*s;

	s = "computer";
	printf("%d\n", (int)ft_strlcat(d, s, 5));
	printf("%s\n", d);
	return (0);
}*/
