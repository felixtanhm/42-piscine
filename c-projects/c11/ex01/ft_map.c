/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:49:40 by feltan            #+#    #+#             */
/*   Updated: 2024/03/14 14:54:06 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

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
