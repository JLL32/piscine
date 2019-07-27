/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 18:54:47 by ael-hach          #+#    #+#             */
/*   Updated: 2019/07/15 18:54:50 by ael-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	if (nb % 2 == 0 && nb != 2)
		return (0);
	if (nb == 2)
		return (1);
	else
	{
		i = 3;
		while (i < nb / 2)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int np;

	np = nb;
	if (!is_prime(nb))
	{
		while (1)
		{
			np++;
			if (is_prime(np))
				return (np);
		}
	}
	else
		return (nb);
}
