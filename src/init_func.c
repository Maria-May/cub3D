/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaryn <mdaryn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:10:24 by cyelena           #+#    #+#             */
/*   Updated: 2022/10/23 14:44:13 by mdaryn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

void	set_textures(t_data *data)
{
	int	x;
	int	y;
	int	i;
	int	k;

	k = -1;
	while ((++k < 4))
	{
		data->img.img_texturing_xpm[k] = mlx_xpm_file_to_image(data->mlx, \
		data->img.dir_names[k], &x, &y);
		data->img.texture_addr[k] = mlx_get_data_addr(\
		data->img.img_texturing_xpm[k], &x, &y, &i);
	}
}

void	init_parsing(t_data *data, size_t *size, int *i)
{
	*size = 0;
	*i = 0;
	data->player.map_flag = 0;
	data->img.flag = 0;
}
