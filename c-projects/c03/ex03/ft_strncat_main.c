/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 06:25:35 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/07 20:25:44 by feltan           ###   ########.fr       */
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

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
  int destLen = ft_strlen(dest);
  unsigned int i = 0;

  while(src[i] != '\0' && i < nb)
  {
    dest[destLen + i] = src[i];
    i++;
  }
  dest[destLen + i] = '\0';

  return dest;
}

int main(void)
{
  char str1[40] = "hello";
  char str2[40] = " world";

  ft_strncat(str1, str2, 4);
  printf("%s\n", str1);
  return 0;
}
