/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:07:52 by feltan            #+#    #+#             */
/*   Updated: 2024/03/29 00:37:13 by felixtanhm       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * @brief Writes the alphabet from 'z' to 'a', in lowercase and in ascending order, to the terminal
 * @param NULL
 * @return NULL
 */
void	ft_print_reverse_alphabet(void)
{
	char	count;

	count = 122;
	while (count >= 97)
	{
		write(1, &count, 1);
		count--;
	}
}
