/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 11:44:06 by ael-hach          #+#    #+#             */
/*   Updated: 2019/07/25 11:44:11 by ael-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c);

int	main(int argc, char const *argv[])
{
	int i;
	int j;

	j = argc - 1;
	while (j)
	{
		i = 0;
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j--;
	}
	return (0);
}
