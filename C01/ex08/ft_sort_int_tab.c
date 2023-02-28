/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebektas <bebektas@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:49:13 by bebektas          #+#    #+#             */
/*   Updated: 2023/02/10 19:00:43 by bebektas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
		i++;
		}
	size--;
	}
}
#include <stdio.h>
int main()
{
	int *tab = (int []){0,4,1,3};
	ft_sort_int_tab(tab,4);
	printf("%d %d %d %d",tab[0],tab[1],tab[2],tab[3]);
}
