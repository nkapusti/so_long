/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akapusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:03:00 by akapusti          #+#    #+#             */
/*   Updated: 2023/01/25 14:31:12 by akapusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*str;

	i = nmemb * size;
	if (nmemb == 0 || size == 0)
	{
		str = malloc(0);
		return (str);
	}
	if (i / nmemb != size)
		return (0);
	str = malloc(i);
	if (!str)
		return (0);
	ft_bzero(str, i);
	return (str);
}
