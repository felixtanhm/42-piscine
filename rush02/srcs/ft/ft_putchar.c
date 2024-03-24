/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:54:32 by welee             #+#    #+#             */
/*   Updated: 2024/03/16 09:36:01 by welee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/// @brief print a character to the standard output
/// @param c character to be printed
void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
