/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:06:05 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/02/22 10:58:54 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (max <= min)
		return (NULL);
	else
		len = max - min;
	if (len > 0)
		arr = (int *)malloc(len * sizeof(int));
	while (i < len)
	{
		arr[i] = min++;
		i++;
	}
	return (arr);
}
