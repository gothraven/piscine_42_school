/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 02:29:55 by szaghban          #+#    #+#             */
/*   Updated: 2017/07/21 23:11:40 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		dlen;
	char	*dest;

	dlen = 0;
	while (src[dlen])
		dlen++;
	dest = malloc(dlen * sizeof(char*));
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
