/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:22:44 by feltan            #+#    #+#             */
/*   Updated: 2024/03/09 18:18:47 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	if(nb == 0 && power == 0)
		return 1;
	if(power < 0)
		return 0;
	int result = nb;
	while(power > 1)
	{
		result *= nb;
		power--;
	}

	return result;
}
