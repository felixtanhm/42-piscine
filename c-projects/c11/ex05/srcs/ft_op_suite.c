/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 17:04:30 by feltan            #+#    #+#             */
/*   Updated: 2024/03/19 15:23:46 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_add(int a, int b)
{
	return a + b;
}

int ft_minus(int a, int b)
{
	return a - b;
}

int ft_mul(int a, int b)
{
	return a * b;
}

int ft_div(int a, int b)
{
	if(b == 0)
		return 0;
	return a / b;
}

int ft_mod(int a, int b)
{
	if(b == 0)
		return 0;
	return a % b;
}
