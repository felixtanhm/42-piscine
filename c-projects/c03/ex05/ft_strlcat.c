/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 06:56:28 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/04 07:22:58 by felixtanhm       ###   ########.fr       */
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

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
  int destLen = ft_strlen(dest);
  int srcLen = ft_strlen(src);
  int finalSize = size - destLen - 1;
  int i = 0;

  if(finalSize != 0)
  {
    while(src[i] != '\0' && i < finalSize)
    {
      dest[destLen + i] = src[i];
      i++;
    }
   dest[destLen + i] = '\0';
  }
  return destLen + srcLen;
}