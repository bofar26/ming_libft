/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:37:46 by mipang            #+#    #+#             */
/*   Updated: 2024/11/19 15:47:18 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i ++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	unsigned char	*s;
	int	i;

	i = 0;
	s = (unsigned char *) malloc (sizeof(char) * strlen(s));
	if (!s)
		return (1);
	ft_memset(s, 4,7);
	while (s[i] != '\0')
	{
		printf("%d ", s[i]);
		i ++;
	}
	free(s);
	return(0);
}*/
