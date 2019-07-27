/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 10:33:37 by ael-hach          #+#    #+#             */
/*   Updated: 2019/07/15 10:40:12 by ael-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (!power)
		return (1);
	else if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (0);
}
