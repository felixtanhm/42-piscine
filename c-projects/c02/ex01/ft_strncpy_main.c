/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 03:15:58 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/07 14:36:55 by feltan           ###   ########.fr       */
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
  char src[40] = "carty";
  char dest[40] = "fgsfggsfgf";
  int size = 4;
  int i = 0;

  ft_strncpy(dest, src, size);
  printf("%s\n", dest);
  return 0;
}
