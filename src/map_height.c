/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_height.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akapusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:56:02 by akapusti          #+#    #+#             */
/*   Updated: 2023/09/06 11:56:07 by akapusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_height(t_root *root, char *file)
{
	int				i;
	int				j;

	root->game->height = 1;
	i = root->game->width + 1;
	while (file[i] != 0)
	{
		j = 0;
		while (file[i + j] != 0 && file[i + j] != '\n')
			j++;
		if (root->game->width != j)
		{
			free(file);
			root_destroy(root, "map format is invalid", 0);
		}
		i += root->game->width + 1;
		root->game->height++;
	}
}
