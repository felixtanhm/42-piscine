/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 03:15:58 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/03 03:34:51 by felixtanhm       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, const char *src, unsigned int n) 
{
  int i = 0;

  while(src[i] != '\0' && i < n)
  {
    dest[i] = src[i];
    i++;
  }

  if(i < n) 
  {
    while (i < n)
    {
      dest[i] = '\0';
      i++;
    }
  }

  return dest;
}

int main(void) 
{
  char src[40] = "car";
  char dest[40];
  int size = 5;
  int i = 0;

  ft_strncpy(dest, src, size);
  while(i < size)
  {
    printf("%d\n", dest[i]);
    i++;
  }
  return 0;
}