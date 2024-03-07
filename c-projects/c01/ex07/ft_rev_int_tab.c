/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 23:37:37 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/07 11:51:43 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int len;

	i = 0;
	len = size - 1;

	while(i < size / 2)
	{
		ft_swap(&tab[i], &tab[len - i]);
		i++;
	}
}
