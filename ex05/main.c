/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:51:52 by truello           #+#    #+#             */
/*   Updated: 2023/09/14 19:25:55 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	add(int a, int b)
{
	printf("%d\n", a + b);
}

void	sub(int a, int b)
{
	printf("%d\n", a - b);
}

void	mult(int a, int b)
{
	printf("%d\n", a * b);
}

void	divide(int a, int b)
{
	if (b == 0)
		printf("Stop : division by zero\n");
	else
		printf("%d\n", a / b);
}

void	modulo(int a, int b)
{
	if (b == 0)
		printf("Stop : modulo by zero\n");
	else
		printf("%d\n", a % b);
}

void	do_op(int a, int b, void (*f)(int, int))
{
	(*f)(a, b);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[3]);
		char c = argv[2][0];

		printf(" %c\n", c);

		if (c == '+')
			do_op(a, b, &add);
		else if (c == '-')
			do_op(a, b, &sub);
		else if (c == '/')
			do_op(a, b, &divide);
		else if (c == '*')
			do_op(a, b, &mult);
		else if (c == '%')
			do_op(a, b, &modulo);
		else
			write(1, "0\n", 2);
	}
	return (0);
}
