/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_respecting_quotes.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:50:16 by orahmoun          #+#    #+#             */
/*   Updated: 2022/02/18 17:03:43 by orahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	**spilt_respecting_quotes(char *str, char c)
{
	char	**splited_rd;
	int		i;
	int		j;

	init_indexs(2, 0, &i, &j);
	if (str == NULL)
		return (NULL);
	splited_rd = init_2d_array();
	while (str[i])
	{
		skip_char(str, &i, c);
		j = i;
		while (str[i] && str[i] != c)
		{
			if (str[i] == '\'' || str[i] == '\"')
				skip_until_char(str, &i, str[++i - 1]);
			i++;
		}
		splited_rd = add_element_2d_array_last(splited_rd,
				ft_substr(str, j, i - j));
	}
	return (splited_rd);
}
