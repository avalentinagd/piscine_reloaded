/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalleg <angalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 16:47:59 by angalleg          #+#    #+#             */
/*   Updated: 2026/05/25 16:53:54 by angalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;

	while (*s1 || *s2)
	{
		diff = *s1 - *s2;
		s1++;
		s2++;
	}
	return (diff);
}

// int main(void)
// {
//     int diff;
//     diff = ft_strcmp("ABCD", "ABCK");
//     printf("%d", diff);
//     return (0);
// }
