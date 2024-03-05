/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize_main.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 13:09:01 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/05 16:12:34 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_alphanum(char c)
{
	if (c < '0')
		return (0);
	if (c > '9' && c < 'A')
		return (0);
	if (c > 'Z' && c < 'a')
		return (0);
	if (c > 'z')
		return (0);
	return (1);
}

int	ft_checkfirstchar(char *c)
{
	if (ft_is_alphanum(*c) == 1)
	{
		if (c[0] >= 'a' && c[0] <= 'z')
			*c -= 32;
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_prior_alphanum;

	i = 1;
	is_prior_alphanum = ft_checkfirstchar(&str[0]);
	while (str[i] != '\0')
	{
		if (ft_is_alphanum(str[i]) == 1)
		{
			if(is_prior_alphanum == 0)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] -= 32;
				}
				is_prior_alphanum = 1;

			}
		}
		else
			is_prior_alphanum = 0;
		i++;
	}
	return (str);
}

int main(void)
{
  char str[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
  ft_strcapitalize(str);
  printf("%s\n", str);

  return 0;
}
