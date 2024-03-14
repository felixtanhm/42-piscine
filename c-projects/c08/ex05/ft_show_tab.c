/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:34:28 by feltan            #+#    #+#             */
/*   Updated: 2024/03/14 13:58:19 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}

void ft_putnbr(int nb)
{
	if(nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else {
		ft_putchar(nb + 48);
	}
}

void ft_show_tab(struct s_stock_str *par)
{
	ft_putstr((*par).str);
	ft_putchar('\n');
	ft_putnbr((*par).size);
	ft_putchar('\n');
	ft_putstr((*par).copy);
	ft_putchar('\n');
}
