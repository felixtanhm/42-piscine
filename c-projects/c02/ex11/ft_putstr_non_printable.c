/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:59:54 by feltan            #+#    #+#             */
/*   Updated: 2024/03/04 18:12:05 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_check_printable(char c)
{
	if(c >= 32 && c <= 126)
		return (0);
	return (1);
}

void ft_putstr_non_printable(char *str)
{
	int i = 0;
	char hexa[] = "0123456789abcdef";

	while(str[i] != '\0')
	{
		if(ft_check_printable(str[i] == 0))
			ft_putchar(str[i]);
		else
		{
			printf("%c", str[i]);
			ft_putchar('\\');
			ft_putchar(hexa[str[i] / 16]);
			ft_putchar(hexa[str[i] % 16]);
		}
		i++;
	}
}

int main(void)
{
	ft_putstr_non_printable("\tn");
	return 0;
}
