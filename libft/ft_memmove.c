/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akapusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:40:00 by akapusti          #+#    #+#             */
/*   Updated: 2023/01/19 18:34:46 by akapusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	if (dest == 0 && src == 0)
		return (0);
	if ((unsigned char *)dest < (unsigned char *)src)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[n - 1 - i] = \
				((unsigned char *)src)[n - 1 - i];
			i++;
		}
	}
	return ((unsigned char *)dest);
}
