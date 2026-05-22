/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalleg <angalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 18:22:22 by angalleg          #+#    #+#             */
/*   Updated: 2026/05/22 18:32:38 by angalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
//     int d;
//     int m;
//     d = 0;
//     m = 0;
//     printf("%d", d);
//     printf("%d", m);
//     ft_div_mod(7, 2, &d, &m);
//     printf("%d", d);
//     printf("%d", m);
// }
