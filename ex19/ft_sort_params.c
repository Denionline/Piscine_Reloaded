/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dximenes <dximenes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:14:42 by dximenes          #+#    #+#             */
/*   Updated: 2025/04/04 16:05:02 by dximenes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_params(char **params)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (params[i])
	{
		j = i + 1;
		while (params[j])
		{
			if (ft_strcmp(params[i], params[j]) > 0)
			{
				temp = params[i];
				params[i] = params[j];
				params[j] = temp;
			}
			j++;
		}
		ft_putstr(params[i]);
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_params(argv + 1);
	}
	return (0);
}
