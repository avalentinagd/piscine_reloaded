/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angalleg <angalleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 18:36:09 by angalleg          #+#    #+#             */
/*   Updated: 2026/05/25 23:23:13 by angalleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
write(1, &c, 1);
}

void ft_putstr(char *str)
{
while (*str)
{
ft_putchar(*str);
str++;
}
}

int ft_strcmp(char *str1, char *str2)
{
    //int diff;
    while(*str1 && *str2)
    {
        //diff =
        return (*str1 - *str2);
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

void ft_sort_params(int argc, char *argv[])
{
    int i;
    i = 1;
    int diff;
    while(i < argc)
    {
        diff = ft_strcmp(argv[i], argv[i+1]);
        if (diff > 0)
        {
            char *temp;
            
            temp = argv[i];
            argv[i] = argv[i+1];
            argv[i+1] = temp;
        }
    }
    i++;
}

int main(int argc, char *argv[])
{
    int i;

    i = 1;
    if(argc > 1)
    {
        ft_sort_params(argc, argv);
    }
    while(i < argc)
    {
        ft_putstr(argv[i]);
        i++;
    }
    return (0);
}




// int ft_strlen(char *str)
// {
// int len;
// len = 0;
// while (*str)
// {
// len ++;
// str ++;
// }
// return (len);
// }