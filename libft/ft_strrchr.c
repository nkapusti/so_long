/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akapusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:53:03 by akapusti          #+#    #+#             */
/*   Updated: 2023/01/19 15:01:45 by akapusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = (int)ft_strlen((char *)s);
	while (l >= 0)
	{
		if (s[l] == (char)c)
		{
			return ((char *)(s + l));
		}
		l--;
	}
	return (0);
}
