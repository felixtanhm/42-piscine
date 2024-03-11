/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:07:00 by feltan            #+#    #+#             */
/*   Updated: 2024/03/11 12:21:43 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	if(min >= max)
		return (0);

	int *arr;
	int i = 0;
	int range = max - min;

	arr = (int *)malloc(sizeof(int) * range);
	while(i < range)
	{
		arr[i] = min + i;
		i++;
	}

	return arr;
}

int main(void)
{
	int min = 2;
	int max = 6;

	int *res = ft_range(min, max);
	printf("%d %d %d %d", res[0], res[1], res[2], res[3]);
	return 0;
}
