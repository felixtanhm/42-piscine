/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:49:40 by feltan            #+#    #+#             */
/*   Updated: 2024/03/14 17:40:49 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *new_arr;

	i = 0;
	new_arr = (int *)malloc(length * sizeof(int));
	while(i < length)
	{
		new_arr[i] = f(tab[i]);
		i++;
	}
	return new_arr;
}

int mul2(int num)
{
	return num *= 2;
}

#include <stdio.h>
int main(void)
{
	int nums[5] = {1, 2, 3, 4, 5};
	int *res = ft_map(nums, 5, &mul2);
	printf("%d, %d, %d, %d, %d", res[0], res[1], res[2], res[3], res[4]);
	return 0;
}
