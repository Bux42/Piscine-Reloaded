/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videsvau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:41:23 by videsvau          #+#    #+#             */
/*   Updated: 2016/11/04 22:27:51 by videsvau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		reading;
	int		i;
	char	buff[32768];

	i = 0;
	fd = 0;
	if (argc < 2)
		ft_putstr("File name missing.\n");
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		reading = read(fd, &buff, 2048);
		while (buff[i])
		{
			ft_putchar(buff[i]);
			i++;
		}
	}
	return (0);
}
