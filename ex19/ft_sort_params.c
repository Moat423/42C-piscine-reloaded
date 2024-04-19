/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:27:20 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/19 11:36:25 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (!(s1[i] == '\0' || s2[i] == '\0')))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_int_arr(char **arr, int argc)
{
	int		i;
	char	*buffer;
	int		j;

	i = 2;
	while (i < argc)
	{
		buffer = arr[i];
		j = i - 1;
		while (j >= 1 && ft_strcmp(arr[j], buffer) > 0)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = buffer;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc >= 3)
		ft_sort_int_arr(argv, argc);
	while (i < argc)
	{
		if (argv[i][0] == '\0')
			i++;
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
