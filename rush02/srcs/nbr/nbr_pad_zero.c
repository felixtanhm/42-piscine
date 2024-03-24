/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_pad_zero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:54:55 by welee             #+#    #+#             */
/*   Updated: 2024/03/17 14:55:56 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/// @brief pad zero to the left of the char
/// @param c the char to pad
/// @param zeros the number of zeros to pad
/// @return the padded string
char	*nbr_pad_zero(char c, int zeros)
{
	char	*p;
	int		i;
	int		len;

	len = 1 + zeros;
	p = malloc(len + 1);
	p[0] = c;
	i = 1;
	while (i < len)
	{
		p[i] = '0';
		i++;
	}
	p[i] = '\0';
	return (p);
}
