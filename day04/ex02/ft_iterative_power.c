/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 23:08:57 by ael-hach          #+#    #+#             */
/*   Updated: 2019/07/14 23:09:05 by ael-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int j;

	j = 1;
	if (power < 0)
		return (0);
	if (!power)
		return (1);
	while (power)
	{
		j *= nb;
		power--;
	}
	return (j);
}
