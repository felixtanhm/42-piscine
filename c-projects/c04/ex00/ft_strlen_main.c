/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:42:21 by feltan            #+#    #+#             */
/*   Updated: 2024/03/06 09:45:17 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		i++;
	}

	return i;
}

int main(void)
{
	char str[] = "hello";
	int res = ft_strlen(str);
	printf("%d", res);
	return 0;
}
