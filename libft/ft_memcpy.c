/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akapusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:02:05 by akapusti          #+#    #+#             */
/*   Updated: 2023/01/18 15:32:08 by akapusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*to;
	const unsigned char	*from;

	if (!dest && !src)
		return (0);
	to = dest;
	from = src;
	while (n-- > 0)
	{
		*to++ = *from++;
	}
	return (dest);
}
