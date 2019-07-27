/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 20:44:27 by ael-hach          #+#    #+#             */
/*   Updated: 2019/07/05 15:32:50 by ael-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	char start;
	char end;

	start = 48;
	end = 57;
	while (start <= end)
	{
		ft_putchar(start++);
	}
}
