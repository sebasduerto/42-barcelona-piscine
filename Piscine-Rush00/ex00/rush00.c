/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <sduerto-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 13:11:05 by sduerto-          #+#    #+#             */
/*   Updated: 2024/07/07 13:47:13 by nromanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putline(int l, char sc, char mc, char fc)
{
	int	i;

	i = 0;
	while (i < l)
	{
		if (i == 0)
		{
			ft_putchar(sc);
		}
		else if (i != l - 1)
		{
			ft_putchar(mc);
		}
		else
		{
			ft_putchar(fc);
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	i = 0;
	while (i < y)
	{
		if (i == 0)
		{
			ft_putline(x, 'o', '-', 'o');
		}
		else if (i != y - 1)
		{
			ft_putline(x, '|', ' ', '|');
		}
		else
		{
			ft_putline(x, 'o', '-', 'o');
		}
		i++;
	}
}
