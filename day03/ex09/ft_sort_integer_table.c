/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 15:12:07 by ael-hach          #+#    #+#             */
/*   Updated: 2019/07/20 15:12:12 by ael-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int sw;
	int temp;

	while (1)
	{
		i = 0;
		sw = 0;
		while (i <= size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				sw = 1;
			}
			i++;
		}
		if (sw == 0)
			break ;
	}
}
