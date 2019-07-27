/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 11:40:00 by ael-hach          #+#    #+#             */
/*   Updated: 2019/07/25 11:41:05 by ael-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	main(int argc, char const *argv[])
{
	int i;

	i = 0;
	while (argv[argc - argc][i])
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
