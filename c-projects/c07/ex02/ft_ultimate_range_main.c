/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:12:07 by feltan            #+#    #+#             */
/*   Updated: 2024/03/11 14:24:56 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	if(min >= max)
	{
		*range = 0;
		return (0);
	}
	int i = 0;
	int diff = max - min;
	int *result;

	result = malloc(sizeof(int) * diff);
	if(result == 0)
	{
		*range = 0;
		return (-1);
	}
	*range = result;
	while(i < diff)
	{
		result[i] = min + i;
		i++;
	}
	return i;
}

int main(void)
{
	int min = 2;
	int max = 6;
	int *arr;
	int size = ft_ultimate_range(&arr, min, max);

	printf("Size: %d\n", size);
	while(size > 0)
	{
		printf("%d\n", arr[size - 1]);
		size--;
	}
}
