/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:33:53 by feltan            #+#    #+#             */
/*   Updated: 2024/03/09 15:42:37 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(unsigned int nb, unsigned int power)
{
	int result = nb;

	if(power < 0)
		return 0;
	if(power == 0 && nb == 0)
		return 1;
	if(power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	return result;
}

int main(void)
{
	int res = ft_recursive_power(2, 3);
	printf("%d", res);
	return 0;
}
