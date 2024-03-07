/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:27:08 by feltan            #+#    #+#             */
/*   Updated: 2024/03/07 12:16:34 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_nl(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	str[i] = '\n';
	write(1, str, i + 1);
}

int	main(int argc, char *argv[])
{
	int	j;

	j = argc - 1;
	while (j > 0)
	{
		ft_putstr_nl(argv[j]);
		j--;
	}
	return (0);
}
