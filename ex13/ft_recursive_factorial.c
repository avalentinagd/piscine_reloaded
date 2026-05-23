/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalleg <angalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 18:45:35 by angalleg          #+#    #+#             */
/*   Updated: 2026/05/23 20:48:57 by angalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// int main(void)
// { 
//     int   nb;
//     nb = 4;
//     printf("%d", nb);
//     printf("%s", "\n");
//     nb = ft_recursive_factorial(nb);
//     printf("%d", nb);
//     return (0);
// }
