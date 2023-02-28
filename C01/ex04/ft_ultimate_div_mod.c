/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebektas <bebektas@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:21:07 by bebektas          #+#    #+#             */
/*   Updated: 2023/02/10 18:30:08 by bebektas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;
	
	if (*b != 0)
	{	
		tmp = *a;
		*a = *a / *b;
		*b = tmp % *b;
	}
}
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 2;
	ft_ultimate_div_mod(&a,&b);
	printf("%d %d",a,b);
}
