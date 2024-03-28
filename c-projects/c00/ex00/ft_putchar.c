/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:29:25 by feltan            #+#    #+#             */
/*   Updated: 2024/03/29 00:35:49 by felixtanhm       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * @brief Writes a character provided as a parameter to the terminal
 * @param A character
 * @return NULL
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
