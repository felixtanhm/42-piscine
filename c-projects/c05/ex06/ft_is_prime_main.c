/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:14:30 by feltan            #+#    #+#             */
/*   Updated: 2024/03/10 13:59:27 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	if (nb < 0 || nb == 0 || nb == 1)
		return 0;
	if(nb == 2 || nb == 3)
		return 1;

	int i = 2;
	while(i < nb)
	{
		if(nb % i == 0)
			return 0;
		i++;
	}
	return 1;
}

int main(void)
{
	int num = 7920;
	int res = ft_is_prime(num);
	printf("%d is Prime: %d", num, res);
	return 0;
}
