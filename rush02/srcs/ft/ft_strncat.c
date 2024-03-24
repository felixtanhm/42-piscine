/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:25:21 by welee             #+#    #+#             */
/*   Updated: 2024/03/17 18:45:07 by mamu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/// @brief concatenate two strings
/// @param dest the destination string
/// @param src the source string
/// @param nb the number of characters to concatenate
/// @return the concatenated string
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	c = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = '\0';
	return (dest);
}
