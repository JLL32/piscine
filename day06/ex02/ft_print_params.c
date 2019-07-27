/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 11:41:56 by ael-hach          #+#    #+#             */
/*   Updated: 2019/07/25 11:43:08 by ael-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	main(int argc, char const *argv[])
{
	int i;
	int j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (0);
}
