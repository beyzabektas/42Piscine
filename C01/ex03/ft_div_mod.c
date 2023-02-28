/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebektas <bebektas@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:18:02 by bebektas          #+#    #+#             */
/*   Updated: 2023/02/10 18:15:29 by bebektas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
#include <stdio.h>
int main()
{
	int c = 10;
	int d = 5;
	int div;
	int mod;
	ft_div_mod(c,d,&div,&mod);
	printf("%d %d",div,mod);
}
