/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:04:24 by feltan            #+#    #+#             */
/*   Updated: 2024/03/14 17:36:02 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int length, int(*f)(char*))
{
	int i = 0;
	int count = 0;

	while(i < length)
	{
		if(f(tab[i]))
			count++;
		i++;
	}
	return count;
}
