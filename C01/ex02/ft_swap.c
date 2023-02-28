/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebektas <bebektas@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:11:12 by bebektas          #+#    #+#             */
/*   Updated: 2023/02/10 17:34:04 by bebektas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
#include <stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	ft_swap(&a,&b);
	printf("%d %d",a,b);
}
