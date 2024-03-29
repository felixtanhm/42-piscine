/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power_main.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:22:44 by feltan            #+#    #+#             */
/*   Updated: 2024/03/09 18:29:12 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	if(power == 0)
		return 1;
	if(power < 0)
		return 0;
	int result = nb;
	while(power > 1)
	{
		result *= nb;
		power--;
	}

	return result;
}

int main(void)
{
	int res = ft_iterative_power(2, 3);
	printf("%d", res);
	return 0;
}
