/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:41:09 by ael-hach          #+#    #+#             */
/*   Updated: 2019/07/20 11:41:11 by ael-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n / 10)
		putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int		power(int nb, int power)
{
	if (!power)
		return (1);
	else if (power > 0)
		return (nb * power(nb, power - 1));
	else
		return (0);
}

void	ft_print_combn(int n)
{
	int limit;
	int i;

	limit = power(10, n) - 1;
	i = 0;
	while (i <= limit)
	{
		putnbr(i);
		i++;
	}
}
