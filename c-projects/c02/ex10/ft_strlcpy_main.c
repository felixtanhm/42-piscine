/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:56:20 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/03 21:14:12 by felixtanhm       ###   ########.fr       */
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

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
  int i  = 0;
  int len = ft_strlen(src); 

  if(size != 0)
  {
    while(src[i] != '\0' && i < size - 1)
    {
      dest[i] = src[i];
      i++;
    }
    dest[i] = '\0';
  }

  return len;
}

int main(void)
{
  char str[40] = "hello world";
  char dest[40];

  ft_strlcpy(dest, str, 10);
  printf("%s\n", dest);
  return 0;
}