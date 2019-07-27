/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 11:48:03 by ael-hach          #+#    #+#             */
/*   Updated: 2019/07/25 11:48:07 by ael-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print(char *s)
{
	int i;

	i = 0;
	while (s[i])
		ft_putchar(s[i++]);
}

int		ft_strcmp(char *string1, char *string2)
{
	int i;

	i = 0;
	while (string1[i])
	{
		if (string1[i] != string2[i])
			return (string1[i] - string2[i]);
		i++;
	}
	return (0);
}

char	**str_sort(char **str, int size)
{
	char	*temp;
	int		i;
	int		sw;

	while (1)
	{
		sw = 0;
		i = 1;
		while (i <= size - 2)
		{
			if (ft_strcmp(str[i], str[i + 1]) > 0)
			{
				temp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = temp;
				sw = 1;
			}
			i++;
		}
		if (sw == 0)
			break ;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int j;

	str_sort(argv, argc);
	j = 1;
	while (j < argc)
	{
		ft_print(argv[j]);
		ft_putchar('\n');
		j++;
	}
	return (0);
}
