/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 04:23:18 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/03 04:28:46 by felixtanhm       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str)
{
  int i = 0;

  while(str[i] != '\0')
  {
    str[i] = str[i] - 32;
    i++;
  }
  
  return str;
}

int main(void) 
{
  char str[40] = "hello";
  ft_strupcase(str);
  printf("%s", str);
  return 0;
}