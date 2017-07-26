/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 05:05:35 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/26 08:49:48 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			if (!solve_it(argv[i]))
				write(1, ERROR, ft_strlen(ERROR));
			i++;
		}
	}
	else
	{
		if (!solve_it(""))
			write(1, ERROR, ft_strlen(ERROR));
	}
	return (0);
}
