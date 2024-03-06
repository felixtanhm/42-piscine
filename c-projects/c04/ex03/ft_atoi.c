/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:40:36 by feltan            #+#    #+#             */
/*   Updated: 2024/03/06 10:46:39 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{

}

int main(void)
{
	char str[] = "";
	int res = ft_atoi(str);
	int res2 = atoi(str);
	printf("%d", res);
	printf("%d", res2);
	return 0;
}
