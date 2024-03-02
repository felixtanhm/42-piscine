/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 03:44:50 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/03 04:21:29 by felixtanhm       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str)
{
  int i = 0;

  if(str[i] == '\0')
    return 1;
  
  while (str[i] != '\0')
  {
    if(str[i] < 32 || str[i] > 126 )
      return 0;
    i++;
  }

  return 1;
}

int main(void)
{
  char str[40] = "ABC";
  int i = ft_str_is_printable(str);

  printf("%d\n", i);
  printf("%c", 32);

  return 0;
}