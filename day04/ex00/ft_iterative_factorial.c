/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 16:28:40 by ael-hach          #+#    #+#             */
/*   Updated: 2019/07/11 16:28:50 by ael-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else
		while (nb > 1)
			fact = fact * nb--;
	return (fact);
}
