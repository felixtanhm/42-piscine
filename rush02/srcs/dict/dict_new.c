/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_new.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:28:55 by mamu              #+#    #+#             */
/*   Updated: 2024/03/17 23:02:44 by mamu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "dict.h"

static char	**str_arr_new(void)
{
	char	**arr;
	int		i;

	i = 0;
	arr = malloc(sizeof(char *) * 128);
	while (i < 128)
	{
		arr[i] = malloc(sizeof(char) * 128);
		i++;
	}
	return (arr);
}

t_dict	dict_new(void)
{
	t_dict	dict;

	dict.keys = str_arr_new();
	dict.values = str_arr_new();
	dict.size = 0;
	return (dict);
}
