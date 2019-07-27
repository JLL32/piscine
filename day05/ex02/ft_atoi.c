/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 09:53:53 by ael-hach          #+#    #+#             */
/*   Updated: 2019/07/25 09:54:27 by ael-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_atoi_exceptions(char *str, int i, int n, int *negative)
{
	while (1)
	{
		if (str[i] == ' ' || str[i] == '	')
			i++;
		else if (str[i] == '-' || str[i] == '+')
		{
			if (str[i + 1] < '0' || str[i + 1] > '9')
				return (n);
			if (str[i] == '-')
				*negative = 1;
			i++;
		}
		else if (str[i] == '\0' || str[i] < '0' || str[i] > '9')
			return (n);
		else
		{
			n = n + (str[i] - '0');
			if (str[i + 1] >= '0' && str[i + 1] <= '9')
				n = n * 10;
			else
				return (n);
			i++;
		}
	}
}

int				ft_atoi(char *str)
{
	int				i;
	unsigned int	n;
	int				nb;
	int				negative;

	i = 0;
	n = 0;
	nb = 0;
	negative = 0;
	n = ft_atoi_exceptions(str, i, n, &negative);
	if (negative == 1 && n <= 2147483648)
	{
		nb = n * -1;
	}
	else if (n <= 2147483647)
	{
		nb = n;
	}
	return (nb);
}
