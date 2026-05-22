/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalleg <angalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 18:22:30 by angalleg          #+#    #+#             */
/*   Updated: 2026/05/22 18:38:09 by angalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	result = 1;
	i = 2;
	while (i <= nb)
	{
		result *= i;
		if (result <= 0)
			return (0);
		i++;
	}
	return (result);
}

// int main(void)
// {
//     int fact;

//     fact = -2;
//     printf("%d", fact);
//     write(1, "\n", 1);
//     fact = ft_iterative_factorial(fact);
//     printf("%d", fact);
//     return (0);
// }
