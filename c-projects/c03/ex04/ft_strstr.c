/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 06:45:29 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/14 16:12:50 by feltan           ###   ########.fr       */
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

char *ft_strstr(char *str, char *to_find)
{
  int i = 0;
  int j = 0;
  int to_find_len = ft_strlen(to_find);

  if(to_find[0] == '\0')
	return str;
  while(str[i] != '\0')
  {
    if(str[i] == to_find[j])
    {
			while(to_find[j] != '\0')
			{
				if(to_find[j] == str[i + j])
					j++;
				if(to_find[j] != str[i + j])
					j = to_find_len;
			}
			if(j == to_find_len)
				return &str[i];
    }
    i++;
  }
  return 0;
}
