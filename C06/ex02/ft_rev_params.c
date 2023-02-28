/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebektas <bebektas@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:29:01 by bebektas          #+#    #+#             */
/*   Updated: 2023/02/24 15:14:22 by bebektas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = ac - 1;
	if (ac >= 2)
	{
		while (j > 0)
		{
			while (av[j][i] != '\0')
			{
				write(1, &av[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j--;
			i = 0;
		}
	}
	return (0);
}
