/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebektas <bebektas@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:40:03 by bebektas          #+#    #+#             */
/*   Updated: 2023/02/10 19:08:39 by bebektas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
#include <stdio.h>
int main()
{
	int a ;
	int *ptr = &a;
	ft_ft(ptr);
	printf("%d",*ptr);
}
