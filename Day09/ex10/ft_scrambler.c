/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:35:45 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/14 13:39:24 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int a1;
	int b1;
	int c1;
	int d1;

	a1 = ***a;
	b1 = *b;
	c1 = *******c;
	d1 = ****d;
	*******c = a1;
	****d = c1;
	*b = d1;
	***a = b1;
}