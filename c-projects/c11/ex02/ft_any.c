/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:54:44 by feltan            #+#    #+#             */
/*   Updated: 2024/03/14 17:35:54 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_any(char **tab, int(*f)(char *))
{
	int i = 0;

	while(tab[i])
	{
		if(f(tab[i]) != 0)
			return 1;
		i++;
	}
	return 0;
}
