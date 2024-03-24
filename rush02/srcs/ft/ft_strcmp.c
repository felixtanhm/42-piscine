/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:40:21 by welee             #+#    #+#             */
/*   Updated: 2024/03/06 18:43:08 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief compare two strings
/// @param s1 string 1
/// @param s2 string 2
/// @return 0 if s1 and s2 are equal, otherwise the difference between the
/// first two differing characters
int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}
