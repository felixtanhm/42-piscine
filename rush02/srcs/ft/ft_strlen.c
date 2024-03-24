/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:43:34 by welee             #+#    #+#             */
/*   Updated: 2024/03/16 09:37:48 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief find the length of a string
/// @param str string to be measured
/// @return the length of the string
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
