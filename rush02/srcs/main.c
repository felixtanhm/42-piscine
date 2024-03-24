/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiyli <etherealdt@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:35:27 by welee             #+#    #+#             */
/*   Updated: 2024/03/17 23:26:01 by mamu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int	error(void)
{
	ft_error("Error\n");
	return (1);
}

static int	dict_error(void)
{
	ft_error("Dict Error\n");
	return (1);
}

static int	init(char *dict_path, char *input)
{
	t_dict			dict;
	int				dict_code;
	t_nbr_buffer	*nbr;
	int				nbr_code;
	char			*str;

	str = file_read(dict_path);
	dict = dict_new();
	dict_code = dict_parse(&dict, str);
	if (dict_code == -1)
		return (dict_error());
	nbr = nbr_buffer_new();
	nbr_code = nbr_break(nbr, &dict, input);
	if (nbr_code == -1)
		return (dict_error());
	nbr_buffer_print(nbr);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = check_arg(argc, argv, DEFAULT_DICT);
	if (i == 0)
		return (error());
	else if (i == -1)
		return (dict_error());
	if (argc == 2)
	{
		init(DEFAULT_DICT, argv[1]);
	}
	else if (argc == 3)
	{
		init(argv[1], argv[2]);
	}
	return (0);
}
