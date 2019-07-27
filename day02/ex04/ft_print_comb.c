/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 09:52:39 by ael-hach          #+#    #+#             */
/*   Updated: 2019/07/09 03:48:21 by ael-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print(int i, int j, int k)
{
	ft_putchar('0' + i);
	ft_putchar('0' + j);
	ft_putchar('0' + k);
	if (!(i == 7 && j == 8 && k == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i <= 7)
	{
		j = 1;
		while (j <= 8)
		{
			k = 2;
			while (k <= 9)
			{
				if (k > j && j > i)
					ft_print(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
