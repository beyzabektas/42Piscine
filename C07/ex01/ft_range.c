/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebektas <bebektas@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:03:20 by bebektas          #+#    #+#             */
/*   Updated: 2023/02/25 07:40:37 by bebektas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret_val;	
	int	i;

	if (min >= max)
		return (0);
	ret_val = malloc((max - min) * sizeof(int));
	if (ret_val == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		ret_val[i] = min;
		min++;
		i++;
	}
	return (ret_val);
}
