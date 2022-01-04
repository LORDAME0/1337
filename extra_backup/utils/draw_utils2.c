/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 07:27:29 by orahmoun          #+#    #+#             */
/*   Updated: 2022/01/02 08:00:27 by orahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../header.h"
#include "draw.h"
void	draw_skel(t_assets a, t_info info, int w, int h)
{
	draw_ground (a, info, w, h);
	mlx_put_image_to_window (info.connection, info.window, a.skel, w, h);
}