/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:04:51 by feltan            #+#    #+#             */
/*   Updated: 2024/03/09 16:13:54 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	int num;

	if(nb == 0)
		return 0;
	if(nb == 1)
		return 1;
	num = 2;
	if(nb > 3)
	{
		while((num * num) <= nb)
		{
			if((num * num) == nb)
				return num;
			num++;
		}
	}
	return 0;
}

int main(void)
{
	int res = ft_sqrt(-2282);
	printf("%d", res);
	return 0;
}
