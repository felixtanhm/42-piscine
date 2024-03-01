/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 23:37:37 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/01 11:34:47 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int swap;
	int len;

	i = 0;
	len = size - 1;

	while(i < len/2)
	{
		swap = tab[i];
		tab[i] = tab[len - i];
		tab[len - i] = swap;
		i++;
	}
}
