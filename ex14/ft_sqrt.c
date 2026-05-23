/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalleg <angalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 22:32:07 by angalleg          #+#    #+#             */
/*   Updated: 2026/05/23 20:42:56 by angalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;

	if (nb < 0)
		return (0);
	x = 0;
	while (nb >= x * x)
	{
		if (nb == x * x)
			return (x);
		x++;
	}
	return (0);
}

// int main(void)
// {
//     int result;
//     result = ft_sqrt(25);
//     printf("%d", result);
//     return (0);
//}
