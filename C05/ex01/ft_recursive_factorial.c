/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebektas <bebektas@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 20:21:33 by bebektas          #+#    #+#             */
/*   Updated: 2023/02/22 19:43:51 by bebektas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	if (nb < 0)
		return (0);
	return (result);
}
#include <stdio.h>
int main()
{
	printf("%d",ft_iterative_factorial(3));
}
