/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:48:25 by feltan            #+#    #+#             */
/*   Updated: 2024/03/09 16:00:05 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
	if(index < 0)
		return -1;
	if(index < 2)
		return index;
	int result;

	result = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return result;
}

int main(void)
{
	int res = ft_fibonacci(4);
	printf("%d", res);
	return 0;
}
