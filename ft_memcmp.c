/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:25:23 by mipang            #+#    #+#             */
/*   Updated: 2024/12/02 01:06:09 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_uc;
	unsigned char	*s2_uc;
	size_t			i;

	s1_uc = (unsigned char *)s1;
	s2_uc = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1_uc[i] != s2_uc[i])
			return ((int)(s1_uc[i] - s2_uc[i]));
		i ++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1_test;
	char	*s2_test;

	s1_test = "122222222";
	s2_test = "okcoputer";

	printf("%d\n", ft_memcmp(s1_test, s2_test, 0));
	return (0);
}*/
