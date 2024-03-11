/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime_main.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:48:03 by feltan            #+#    #+#             */
/*   Updated: 2024/03/11 11:32:23 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb > 547483647)
		nb = nb / 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	int	curr_num;

	curr_num = nb;
	if (nb < 0)
		curr_num = 0;
	while (curr_num >= 0 && curr_num < 2147483647)
	{
		if (check_prime(curr_num) == 1)
			break ;
		curr_num++;
	}
	return (curr_num);
}

int main(void)
{
	int num = 500;
	int res = ft_find_next_prime(num);
	printf("%d", res);
	return 0;
}
