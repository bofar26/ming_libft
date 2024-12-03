/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:43:27 by mipang            #+#    #+#             */
/*   Updated: 2024/11/24 19:03:38 by mipang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_substrings(const char *str, char c)
{
	int	i;
	int	count;
	int	in_substring;

	i = 0;
	in_substring = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] != c && !in_substring)
		{
			count ++;
			in_substring = 1;
		}
		else if (str[i] == c)
			in_substring = 0;
		i ++;
	}
	return (count);
}

static char	*substring_copy(const char *substr, int len)
{
	char	*output;
	int		i;

	i = 0;
	output = (char *)malloc(len + 1);
	if (!output)
		return (NULL);
	while (i < len)
	{
		output[i] = substr[i];
		i ++;
	}
	output[i] = '\0';
	return (output);
}

static void	free_result(char **str, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(str[i]);
		i ++;
	}
	free(str);
}

static int	fill_result(char **result, const char *s, char c)
{
	const char	*start;
	int			i;
	int			len_sub;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s ++;
		start = s;
		while (*s != c && *s != '\0')
			s ++;
		len_sub = s - start;
		if (len_sub > 0)
		{
			result[i] = substring_copy(start, len_sub);
			if (!result[i])
			{
				free_result(result, i);
				return (0);
			}
			i ++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		c_sub;

	c_sub = count_substrings(s, c);
	if (!s)
		return (NULL);
	result = (char **) malloc ((c_sub + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (!fill_result(result, s, c))
		return (NULL);
	result[c_sub] = NULL;
	return (result);
}
