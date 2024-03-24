/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_buffer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamu <mamu@c2r6s9.42singapore.sg>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 22:02:06 by mamu              #+#    #+#             */
/*   Updated: 2024/03/17 23:04:05 by mamu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "nbr.h"
#include "ft.h"

t_nbr_buffer	*nbr_buffer_new(void)
{
	t_nbr_buffer	*buffer;

	buffer = malloc(sizeof(t_nbr_buffer));
	buffer->words = malloc(sizeof(char *));
	buffer->words[0] = 0;
	buffer->size = 0;
	return (buffer);
}

void	nbr_buffer_add(t_nbr_buffer *buffer, char *word)
{
	char	**words;
	int		i;

	words = malloc(sizeof(char *) * (buffer->size + 1));
	i = 0;
	while (i < buffer->size)
	{
		words[i] = buffer->words[i];
		i++;
	}
	words[i] = word;
	free(buffer->words);
	buffer->words = words;
	buffer->size += 1;
}

void	nbr_buffer_print(t_nbr_buffer *buffer)
{
	int	i;

	i = 0;
	while (i < buffer->size)
	{
		ft_putstr(buffer->words[i]);
		if (i < buffer->size - 1)
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	nbr_buffer_destroy(t_nbr_buffer *buffer)
{
	int	i;

	i = 0;
	while (i < buffer->size)
	{
		free(buffer->words[i]);
		i++;
	}
	free(buffer);
}
