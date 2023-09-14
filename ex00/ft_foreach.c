/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:27:56 by truello           #+#    #+#             */
/*   Updated: 2023/09/14 14:41:09 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*#include <stdio.h>
void	print_num(int n)
{
	printf("Num : %d\n", n);
}

int	main(void)
{
	int test[5] = {4, 5, 3, 5, 6};
	void	(*ptf)(int);
	ptf = &print_num;
	ft_foreach(test, 5, ptf);
	return (0);
}*/
