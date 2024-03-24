/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiyli <etherealdt@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 17:05:09 by welee             #+#    #+#             */
/*   Updated: 2024/03/17 21:41:12 by yiyli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

/// @brief check if the arguments are valid
/// @param argc argument count
/// @param argv argument vector
/// @return 1 if the arguments are valid, -1 for  0 otherwise
int	check_arg(int argc, char **argv, char *default_dict)
{
	if (argc < 2 || argc > 3)
		return (0);
	if (argc == 2)
	{
		if (!check_digits(argv[1]))
			return (0);
		if (!check_dict_file(default_dict))
		{
			return (-1);
		}
	}
	if (argc == 3)
	{
		if (!check_dict_file(argv[1]))
		{
			return (-1);
		}
		if (!check_digits(argv[2]))
			return (0);
	}
	return (1);
}
