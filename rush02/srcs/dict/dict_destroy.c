/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_destroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamu <mamu@c2r6s9.42singapore.sg>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 22:59:15 by mamu              #+#    #+#             */
/*   Updated: 2024/03/17 23:25:08 by mamu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "dict.h"

void	dict_destroy(t_dict *dict)
{
	int	i;

	i = 0;
	while (i < dict->size)
	{
		free(dict->keys[i]);
		free(dict->values[i]);
		i++;
	}
	free(dict);
}
