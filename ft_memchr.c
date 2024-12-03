/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:54:05 by mipang            #+#    #+#             */
/*   Updated: 2024/11/15 23:23:32 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_uc;

	s_uc = (const unsigned char *) s;
	while (n --)
	{
		if (*s_uc == (unsigned char)c)
			return ((void *)(s_uc));
		s_uc ++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s;
	int	input;

	input = 112;
	s = "okcomputer";
	printf("%ld\n", (char *)ft_memchr(s, input, 10) - s);
	return (0);
}*/
