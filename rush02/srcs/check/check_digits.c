/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:06:48 by mintan            #+#    #+#             */
/*   Updated: 2024/03/16 18:15:40 by cgoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief check if the string contains only digits
/// @param str string to check
/// @return 1 if the string contains only digits, 0 otherwise
int	check_digits(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
