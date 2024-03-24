/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:40:19 by yiyli             #+#    #+#             */
/*   Updated: 2024/03/17 12:21:19 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/// @brief concatenate two strings
/// @param dest the destination string
/// @param src the source string
/// @return the concatenated string
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	c = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = '\0';
	return (dest);
}
