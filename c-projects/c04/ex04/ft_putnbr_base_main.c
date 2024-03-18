/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:49:47 by feltan            #+#    #+#             */
/*   Updated: 2024/03/18 16:00:04 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i = 0;

	while(str[i] != '\0')
		i++;
	return i;
}

int check_base(char *base)
{
	int base_len = ft_strlen(base);
	int i = 0;
	int j = 0;

	if(base[0] == '\0' || base_len == 1)
		return 0;
	while(base[i] != '\0')
	{
		j = i + 1;
		while(base[j] != '\0')
		{
			if(base[i] == base[j])
				return 0;
			j++;
		}
		if(base[i] == '-' || base[i] == '+' || base[i] <= ' ' || base[i] == 127)
			return 0;
		i++;
	}
	return 1;
}

void ft_putnbr_base(int nbr, char *base)
{
	int is_valid = check_base(base);
	int base_len = ft_strlen(base);

	if(is_valid)
	{
		if(nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		if(nbr >= base_len)
		{
			ft_putnbr_base(nbr / base_len, base);
			ft_putnbr_base(nbr % base_len, base);
		}
		else
		{
			ft_putchar(base[nbr]);
		}
	}
}

int main(void)
{
	ft_putnbr_base(-12, "01");
	return 0;
}
