/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videsvau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:40:09 by videsvau          #+#    #+#             */
/*   Updated: 2016/11/04 19:29:42 by videsvau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int size;
	int *tab;

	if (min >= max)
		return (0);
	size = max - min;
	tab = (int*)malloc(sizeof(int) * size);
	size = 0;
	while (min < max)
	{
		tab[size] = min;
		min++;
		size++;
	}
	return (tab);
}
