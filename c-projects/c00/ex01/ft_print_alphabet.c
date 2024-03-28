/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:46:48 by feltan            #+#    #+#             */
/*   Updated: 2024/03/29 00:36:54 by felixtanhm       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * @brief Writes the alphabet from 'a' to 'z', in lowercase and in ascending order, to the terminal
 * @param NULL
 * @return NULL
 */
void	ft_print_alphabet(void)
{
	char	count;

	count = 97;
	while (count >= 97 && count < 123)
	{
		write(1, &count, 1);
		count++;
	}
}
