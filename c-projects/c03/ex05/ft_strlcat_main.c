/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 06:56:28 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/06 15:47:24 by felixtanhm       ###   ########.fr       */
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

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	j = dlen;
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src [i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}

int main(void)
{
  char dest[15] = "hello";
  char src[40] = " world too";

  ft_strlcat(dest, src, 10);
  printf("%s\n", dest);
  return 0;
}
