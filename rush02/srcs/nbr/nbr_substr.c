/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_substr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:53:53 by welee             #+#    #+#             */
/*   Updated: 2024/03/17 14:57:30 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/// @brief get the substring from the string
/// @param str the string
/// @param from from where to start
/// @param to where to end
/// @return the substring
char	*nbr_substr(char *str, int from, int to)
{
	char	*s;
	int		len;
	int		i;

	i = 0;
	len = to - from + 1;
	s = malloc(len + 1);
	while (i < len)
	{
		s[i] = str[from + i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
