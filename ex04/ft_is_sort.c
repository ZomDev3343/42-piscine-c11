/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:38:14 by truello           #+#    #+#             */
/*   Updated: 2023/09/14 18:51:16 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	first_min(int a, int b)
{
	return (a < b ? -1 : 1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	for (int i = 0; i < length - 1; i++)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			return (0);
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	int test[] = {1};
	printf("Test Is Sort ? : %d\n", ft_is_sort(test, 1, &first_min));
	return (0);
}
