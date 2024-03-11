/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:13:02 by feltan            #+#    #+#             */
/*   Updated: 2024/03/11 12:02:48 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(char *str)
{
	int i = 0;

	while(str[i] != '\0')
		i++;
	return i;
}

char *ft_strdup(char *src)
{
	int len;
	int i = 0;
	char *dest;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int main(void)
{
	char *str = "hello world";
	char *res = ft_strdup(str);
	char *res2 = strdup(str);

	printf("Source: %s | %p\n", str, str);
	printf("Felix Tries: %s | %p\n", res, res);
	printf("Control: %s | %p\n", res2, res2);
	return 0;
}
