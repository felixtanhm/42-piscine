/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 23:37:37 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/01 11:34:38 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int main(void)
{
	int numArr[5] = {1, 2, 3, 4, 5};
	int size;

	size = 5;

	ft_rev_int_tab(numArr, size);
	printf("%d, %d, %d, %d,%d", numArr[0], numArr[1], numArr[2], numArr[3], numArr[4]);
	return(0);
}
