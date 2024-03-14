/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:06:41 by feltan            #+#    #+#             */
/*   Updated: 2024/03/14 17:14:10 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_sorted_asc(int *tab, int length, int(*f)(int, int))
{
	int i = 0;

	while (i < length - 1)
	{
		if(f(tab[i], tab[i + 1]) > 0)
			return 0;
		i++;
	}
	return 1;
}

int ft_is_sorted_desc(int *tab, int length, int(*f)(int, int))
{
	int i = 0;

	while (i < length - 1)
	{
		if(f(tab[i], tab[i + 1]) < 0)
			return 0;
		i++;
	}
	return 1;
}

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	if(ft_is_sorted_asc(tab, length, f) || ft_is_sorted_desc(tab, length, f))
		return 1;
	return 0;
}

int ft_cmp(int a, int b)
{
	return (a - b);
}

#include <stdio.h>
int main(void)
{
	int arr[5] = {5, 4, 3, 4, 1};
	int res = ft_is_sort(arr, 5, ft_cmp);
	printf("%d", res);
	return 0;
}
