/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:45:21 by mipang            #+#    #+#             */
/*   Updated: 2024/12/03 01:19:45 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	if (dest == src || n == 0)
		return (dest);
	i = 0;
	if (dest > src)
	{
		while (n > 0)
		{
			n --;
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i ++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
    void *dest = NULL;
    void *src = NULL;
    size_t n = 5;

    fflush(stdout); 
    ft_memmove(dest, src, n);
    printf("ft_memmove completed without crashing.\n");

    return 0;
}

int main(void)
{
    void *dest = NULL;
    void *src = NULL;
    size_t n = 5;

    fflush(stdout); 
    memmove(dest, src, n);
    printf("Standard memmove completed.\n");

    return 0;
}

*/
