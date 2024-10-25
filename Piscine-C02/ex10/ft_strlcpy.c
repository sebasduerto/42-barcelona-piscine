/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduerto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:59:35 by sduerto-          #+#    #+#             */
/*   Updated: 2024/07/15 15:49:34 by sduerto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	i;
	const char		*temp;

	i = 0;
	length = 0;
	temp = src;
	while (*temp++)
	{
		length++;
	}
	if (size == 0)
	{
		return (length);
	}
	if (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (length);
}