/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalleg <angalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 18:22:11 by angalleg          #+#    #+#             */
/*   Updated: 2026/05/22 18:31:51 by angalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int main(void)
// {
//     int e;
//     int f;    
//     e = 2;
//     f = 3;
//     printf("%d", e);
//     printf("%d", f);
//     printf("%s", "\n");
//     ft_swap(&e, &f);
//     printf("%d", e);
//     printf("%d", f);
// }
