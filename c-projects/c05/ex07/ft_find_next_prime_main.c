/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 16:48:03 by feltan            #+#    #+#             */
/*   Updated: 2024/03/09 16:56:11 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
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

int ft_find_next_prime(int nb)
{
	int curr_num = nb;
	while(curr_num)
	{
		if(ft_is_prime(curr_num) == 1)
			break;
		curr_num++;
	}
	return curr_num;
}

int main(void)
{
	int num = 500;
	int res = ft_find_next_prime(num);
	printf("%d", res);
	return 0;
}
