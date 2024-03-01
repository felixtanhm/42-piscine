/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:52:44 by feltan            #+#    #+#             */
/*   Updated: 2024/03/01 11:07:18 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int a = 5;
	int b = 2;
	int div;
	int mod;
	int *ptr1 = &div;
	int *ptr2 = &mod;

	ft_div_mod(a, b, ptr1, ptr2);
	printf("%d\n", div);
	printf("%d\n", mod);

}
