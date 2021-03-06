/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_strings.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 00:32:26 by orahmoun          #+#    #+#             */
/*   Updated: 2022/01/03 22:48:08 by orahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_bonus.h"

char	*ft_strjoin_string(int number_of_strings, ...)
{
	va_list		params;
	char		*tmp;
	char		*final_string;

	va_start (params, number_of_strings);
	final_string = ft_strdup("");
	while (number_of_strings--)
	{
		tmp = final_string;
		final_string = ft_strjoin (final_string, va_arg(params, char *));
		free (tmp);
		tmp = NULL;
	}
	va_end (params);
	return (final_string);
}
