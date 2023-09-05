/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akapusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:23:49 by akapusti          #+#    #+#             */
/*   Updated: 2023/02/02 14:52:36 by akapusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	counter(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i = 1;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*array(unsigned int n, char *arr, long int len)
{
	while (n > 0)
	{
		arr[len--] = (n % 10) + '0';
		n = n / 10;
	}
	return (arr);
}

char	*ft_itoa(int n)
{
	char			*str;
	long int		len;
	unsigned int	nb;

	len = counter(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		nb = (unsigned int)n * (-1);
	}
	else
		nb = (unsigned int)n;
	str[len--] = '\0';
	array(nb, str, len);
	return (str);
}
