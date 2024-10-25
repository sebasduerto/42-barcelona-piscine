/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <sduerto-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 14:41:11 by sduerto-          #+#    #+#             */
/*   Updated: 2024/07/11 15:57:46 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strupcase(char *str)
{
	char	*orig;

	orig = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str - ('A' - 'a');
		}
		str++;
	}
	return (orig);
}