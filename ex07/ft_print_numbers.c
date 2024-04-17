/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:14:27 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/17 10:39:37 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
		ft_putchar(number++);
}
