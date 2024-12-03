/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:11:33 by mipang            #+#    #+#             */
/*   Updated: 2024/12/02 13:35:55 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_inset(char a, const char *set)
{
	while (*set)
	{
		if (a == *set)
			return (1);
		set ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		s1_len;
	int		result_len;

	if (!s1 || !set)
		return (NULL);
	s1_len = ft_strlen(s1) - 1;
	i = 0;
	while (s1[i] && is_inset(s1[i], set))
		i ++;
	while (s1_len >= i && is_inset(s1[s1_len], set))
		s1_len --;
	result_len = s1_len - i + 1;
	if (result_len <= 0)
		return (ft_strdup(""));
	result = malloc(result_len + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s1[i], result_len + 1);
	return (result);
}
