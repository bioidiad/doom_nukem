/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sector_check_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecelsa <ecelsa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 13:32:47 by sisidra           #+#    #+#             */
/*   Updated: 2021/02/09 15:39:57 by ecelsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "editor.h"

int		doors_close(t_all *all)
{
	unsigned int	i;
	int				*neighbors;
	t_sect			*temp;

	temp = &all->sectors[all->swap_num];
	neighbors = temp->neighbors;
	i = 0;
	while (i < temp->npoints)
	{
		if (neighbors[i] > -1 && all->sectors[neighbors[i]].door > -1)
		{
			print_message(all, RED, "NEIGHBOR IS DOOR!", 500);
			return (1);
		}
		i++;
	}
	return (0);
}

void	check_vert(t_all *all, int *x, int *y, t_sect *temp)
{
	if (temp->npoints == 20)
	{
		print_message(all, RED, "VERTEX LIMIT!", 1000);
		*x = temp->vertex[0].x;
		*y = temp->vertex[0].y;
	}
	while (abs(*x) > 300)
		*x -= *x < 0 ? -1 : 1;
	while (abs(*y) > 300)
		*y -= *y < 0 ? -1 : 1;
}

int		sector_orientation(t_sect *sect, t_xy one, t_xy two)
{
	int				temp;
	int				side;
	unsigned int	i;

	side = 0;
	i = 0;
	while (i < sect->npoints)
	{
		temp = point_side1(sect->vertex[i].x, sect->vertex[i].y, one, two);
		if (temp > 0)
			side = 1;
		else if (temp < 0)
			side = -1;
		i++;
	}
	return (side);
}

int		check_sect_intersect(t_all *all, int num, t_xy one, t_xy two)
{
	int sect1;
	int	sect2;

	if (num == -1)
		return (0);
	sect1 = sector_orientation(&all->sectors[num], one, two);
	sect2 = sector_orientation(&all->sectors[all->num_sectors - 1], one, two);
	if (sect2 == 0 || sect1 == sect2)
		return (1);
	return (0);
}
