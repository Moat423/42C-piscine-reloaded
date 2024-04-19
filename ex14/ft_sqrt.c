/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:33:12 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/18 12:56:09 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 2;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else 
	{
		while (sqrt <= (nb / sqrt))
		{
			if (sqrt * sqrt == nb)
				return (sqrt);
			sqrt++;
		}
		return (0);
	}
}
