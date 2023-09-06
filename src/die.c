/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   die.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akapusti <akapusti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:31:51 by akapusti          #+#    #+#             */
/*   Updated: 2023/09/06 13:20:22 by akapusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	die(char *err, int num)
{
	if (err != 0 || num != 0)
		ft_putendl_fd("Error", 2);
	if (err != 0)
		ft_putstr_fd(err, 2);
	if (err != 0 && num != 0)
		ft_putstr_fd(": ", 2);
	if (num != 0)
		ft_putstr_fd(strerror(num), 2);
	if (err != 0 || num != 0)
	{
		ft_putendl_fd("", 2);
		exit(1);
	}
	exit(0);
}