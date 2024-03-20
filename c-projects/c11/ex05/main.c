/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:16:06 by feltan            #+#    #+#             */
/*   Updated: 2024/03/20 14:53:06 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"
#include "ft_op_suite.h"
#include <unistd.h>

int main(int argc, char *argv[])
{
	if(argc != 4)
		return 1;
	ft_op_exec(argv[1], argv[3], argv[2]);
	return 0;
}
