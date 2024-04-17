/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:26:19 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/17 13:32:56 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		i = nb;
		while (i > 1)
			nb *= --i;
	}
	else
		return (0);
	return (nb);
}
