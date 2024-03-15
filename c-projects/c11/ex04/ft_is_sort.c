/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:06:41 by feltan            #+#    #+#             */
/*   Updated: 2024/03/14 18:20:46 by feltan           ###   ########.fr       */
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
