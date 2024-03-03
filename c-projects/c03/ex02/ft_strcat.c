/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 06:25:35 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/04 06:36:48 by felixtanhm       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
  int i = 0;

  while(str[i] != '\0')
  {
    i++;
  }

  return i;
}

char *ft_strcat(char *dest, char *src)
{
  int destLen = ft_strlen(dest);
  int i = 0;

  while(src[i] != '\0')
  {
    dest[destLen + i] = src[i];
    i++;
  }
  dest[destLen + i] = '\0';

  return dest;
}