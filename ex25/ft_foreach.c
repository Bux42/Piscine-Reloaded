/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videsvau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 18:43:01 by videsvau          #+#    #+#             */
/*   Updated: 2016/11/04 14:30:58 by videsvau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int lenght, void (*f) (int))
{
	int i;

	i = 0;
	while (i < lenght)
	{
		f(tab[i]);
		i++;
	}
}
