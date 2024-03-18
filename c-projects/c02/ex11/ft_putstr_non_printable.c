/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:59:54 by feltan            #+#    #+#             */
/*   Updated: 2024/03/17 16:40:35 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	print_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void ft_putstr_non_printable(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if(str[i] >= ' ' && str[i] <= '~')
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			print_hex(str[i]);
		}
		i++;
	}
}
