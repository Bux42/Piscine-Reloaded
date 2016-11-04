/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: videsvau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:39:47 by videsvau          #+#    #+#             */
/*   Updated: 2016/11/04 14:25:15 by videsvau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
		if (!(s1[i] || s2[i]))
			return (0);
	}
	return (s1[i] - s2[i]);
}

void	ft_print_params(char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	*temp;
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i + 1])
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				i = 1;
			}
			else
				i++;
		}
		ft_print_params(argv);
	}
	return (0);
}
