/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:01:47 by feltan            #+#    #+#             */
/*   Updated: 2024/03/09 18:18:14 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	int result = 1;

	if(nb < 0)
		return 0;
	if(nb > 0)
	{
		result *= nb * ft_recursive_factorial(nb - 1);
	}
	return result;
}
