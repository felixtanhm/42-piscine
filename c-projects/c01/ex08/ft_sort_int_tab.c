/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:33:39 by feltan            #+#    #+#             */
/*   Updated: 2024/03/07 11:43:38 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	while (size >= 0)
	{
		i = 0;
		while(i < size -1)
		{
			if(tab[i] > tab[i + 1])
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
		size--;
	}
}
