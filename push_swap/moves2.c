/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 18:35:11 by orahmoun          #+#    #+#             */
/*   Updated: 2022/01/09 04:48:46 by orahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ss(t_stack *a, t_stack *b, bool print)
{
	swap_top(a, false);
	swap_top(b, false);
	if (print)
		write (1, "ss\n", 3);
}

void	rr(t_stack *a, t_stack *b, bool print)
{
	rotate(a, false);
	rotate(b, false);
	if (print)
		write (1, "rr\n", 3);
}

void	rrr(t_stack *a, t_stack *b, bool print)
{
	rotate_reverse(a, false);
	rotate_reverse(b, false);
	if (print)
		write (1, "rrr\n", 4);
}
