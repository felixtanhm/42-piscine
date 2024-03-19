/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:40:25 by feltan            #+#    #+#             */
/*   Updated: 2024/03/18 19:49:37 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void ft_foreach(int *tab, int length, void(*f)(int))
{
	int i = 0;

	while(i < length)
	{
		f(tab[i]);
		i++;
	}
}

int main(void)
{
	int tab[10] = {0, 1, 3, 3, 4, 5, 6, 7, 8, 9};
	ft_foreach(tab, 10, &ft_putnbr);
	return 0;
}
