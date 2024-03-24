/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:39:01 by welee             #+#    #+#             */
/*   Updated: 2024/03/17 20:08:05 by mamu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

/// @brief print error message
/// @param str error message
void	ft_error(char *str)
{
	write(STDOUT_FILENO, str, ft_strlen(str));
}
