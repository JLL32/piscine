/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 23:57:26 by ael-hach          #+#    #+#             */
/*   Updated: 2019/07/09 10:01:54 by ael-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = -1;
	while (i++ < 98)
	{
		j = i;
		while (j++ < 99)
		{
			ft_putchar('0' + (i / 10));
			ft_putchar('0' + (i % 10));
			ft_putchar(' ');
			ft_putchar('0' + (j / 10));
			ft_putchar('0' + (j % 10));
			if (i == 98 && j == 99)
				break ;
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
