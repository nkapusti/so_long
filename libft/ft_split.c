/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akapusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:11:34 by akapusti          #+#    #+#             */
/*   Updated: 2023/02/02 16:47:11 by akapusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		++i;
	}
	return (0);
}

char	**ft_build_res(const char *str, char *charset)
{
	int		i;
	int		size;
	char	**res;

	i = 0;
	size = 0;
	while (str[i] != '\0')
	{
		if (ft_is_sep(str[i], charset) == 0)
		{
			size += 1;
			while (ft_is_sep(str[i], charset) == 0 && str[i] != '\0')
				++i;
		}
		else
			++i;
	}
	res = (char **)malloc(sizeof(char *) * (size + 1));
	if (!res)
		return (NULL);
	else
	{
		res[size] = 0;
		return (res);
	}
}

char	*ft_cpy_str(const char *str, int begin, int length)
{
	int		i;
	char	*res;

	res = (char *)malloc(sizeof(char) * (length + 1));
	i = 0;
	while (i < length)
	{
		res[i] = str[begin + i];
		++i;
	}
	res[i] = '\0';
	return (res);
}

void	ft_split_intern(char **res, const char *str, char *charset)
{
	int	i;
	int	j;
	int	g;

	i = 0;
	j = 0;
	g = 0;
	while (str[i] != '\0')
	{
		if (ft_is_sep(str[i], charset) == 0)
		{
			j = i;
			while (str[j] != '\0' && ft_is_sep(str[j], charset) != 1)
				++j;
			res[g] = ft_cpy_str(str, i, j - i);
			i = j;
			++g;
		}
		while (str[i] != '\0' && ft_is_sep(str[i], charset) == 1)
			++i;
	}
}

char	**ft_split(char const *s, char c)
{
	char	set[2];
	char	**res;

	ft_strlcpy(set, &c, 2);
	res = ft_build_res(s, set);
	if (!res)
		return (NULL);
	ft_split_intern(res, s, set);
	return (res);
}
