/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:11:04 by feltan            #+#    #+#             */
/*   Updated: 2024/03/01 11:00:31 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int a = 3;
	int b = 2;
	int *ptr1 = &a;
	int *ptr2 = &b;

	ft_swap(ptr1, ptr2);
	printf("%d\n", a);
	printf("%d\n", b);
}
