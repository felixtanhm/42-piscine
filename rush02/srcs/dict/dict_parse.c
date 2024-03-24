/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welee <welee@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:27:44 by qxiang            #+#    #+#             */
/*   Updated: 2024/03/17 22:57:36 by mamu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "dict.h"
#include "ft.h"

/// @brief parsing the string and store the key-value pair in the dictionary
/// @param origin dictionary
/// @param str the string to be parsed
/// @return 0 if success, -1 if malloc failed
int	dict_parse(t_dict *origin, char *str)
{
	int			i;
	int			err_check;
	char		*number;
	char		*word;

	i = 0;
	err_check = 0;
	while (str[i])
	{
		number = malloc(sizeof(char) * 64);
		word = malloc(sizeof(char) * 64);
		err_check = dict_getnbr(number, str + i);
		if (!number || !word || err_check == -1)
			return (-1);
		i += err_check;
		i += dict_skip_to_word(str + i);
		i += dict_getword(word, str + i);
		i += dict_skip_to_next_entry(str + i);
		dict_set(origin, number, word);
		free(number);
		free(word);
	}
	return (0);
}
