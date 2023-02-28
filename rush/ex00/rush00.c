/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebektas <bebektas@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:49:15 by bebektas          #+#    #+#             */
/*   Updated: 2023/02/28 12:00:33 by bbektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int last, char corner, char edge)
{
	int	index;

	index = 1;
	while (index <= last)
	{
		if ((index == 1) || (index == last))
			ft_putchar(corner);
		else
			ft_putchar(edge);
		index++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line;

	line = 1;
	if (x >= 1 && y >= 1)
	{
		while (line <= y)
		{
			if ((line == 1) || (line == y))
				ft_print(x, 'o', '-');
			else
				ft_print(x, '|', ' ');
			line++;
		}
	}
}
