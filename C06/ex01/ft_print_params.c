/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebektas <bebektas@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:19:08 by bebektas          #+#    #+#             */
/*   Updated: 2023/02/24 15:12:31 by bebektas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (ac >= 2)
	{
		while (av[j])
		{	
			while (av[j][i] != '\0')
			{
				write(1, &av[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			i = 0;
			j++;
		}
		return (0);
	}
}
