/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 06:56:28 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/05 17:24:21 by feltan           ###   ########.fr       */
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
	int	dest_len;
	int	src_len;
	int	final_size;
	int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	final_size = size - dest_len - 1;
	i = 0;
	if (final_size <= 0)
		return (src_len + size);
	else
	{
		while (src[i] != '\0' && i < final_size)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
	}
	return (dest_len + src_len);
}

int main(void)
{
  char dest[10] = "hello";
  char src[40] = " world";

  ft_strlcat(dest, src, 10);
  printf("%s\n", dest);
  return 0;
}
