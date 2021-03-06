/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 12:53:20 by orahmoun          #+#    #+#             */
/*   Updated: 2022/01/03 22:48:30 by orahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		i;

	ch = c;
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}
