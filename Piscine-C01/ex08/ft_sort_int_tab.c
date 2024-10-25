/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:10:51 by sduerto-          #+#    #+#             */
/*   Updated: 2024/07/23 15:37:08 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		k = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[k])
				k = j;
			j++;
		}
		if (k != i)
		{
			temp = tab[i];
			tab[i] = tab[k];
			tab[k] = temp;
		}
		i++;
	}
}