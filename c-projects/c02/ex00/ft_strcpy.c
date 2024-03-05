/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 03:15:58 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/05 15:14:06 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, const char *src)
{
  int i = 0;

  while(src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';

  return dest;
}
