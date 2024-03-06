/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:27:04 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/06 18:35:06 by felixtanhm       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_nl(char *str)
{
  int i = 0;

  while(str[i] != '\0')
  {
    i++;
  }
  str[i] = '\n';
  write(1, str, i + 1);
}

int main(int argc, char *argv[])
{
  int j;

  j = 1; 
  while(j < argc)
  {
    ft_putstr_nl(argv[j]);
    j++;
  }
  return (0);
}