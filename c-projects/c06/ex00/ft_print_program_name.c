/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:23:19 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/06 18:26:15 by felixtanhm       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int main(int argc, char *argv[])
{
  int i = 0;

  while(argv[0][i] != '\0' && argc)
  {
    ft_putchar(argv[0][i]);
    i++;
  }
  ft_putchar('\n');
  return (0);
}

