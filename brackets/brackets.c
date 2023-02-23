/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   brackets.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/23 20:34:09 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/23 22:03:15 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "brackets.h"

int match_br(char open, char close)
{
	if ((open == '(' && close == ')') ||
		(open == '[' && close == ']') ||
		(open == '{' && close == '}')) 
		return (1);
	return (0);
}

char *check_br(char *str)
{
	while (*str)
	{
		if (*str == '}' || *str == ']' || *str == ')')
			return (str);
		else if (*str == '{' || *str == '[' || *str == '(')
		{
			if (match_br(*str, *check_br(str + 1)))
				str = check_br(str + 1);
			else
				return("2");
		}
		str++;	
	}
	return ("1");
}

int main(int argc, char **argv)
{
	int	i = 1;
	if (argc == i)
		write(1, "\n", 1);
	while (i < argc)
	{
		if (argv[i] == NULL)
			write(1, "Error\n", 6);
		else if (*check_br(argv[i]) == '1')
			write(1, "OK\n", 3);
		else
			write(1, "Error\n", 6);
		i++;
	}
	return (0);
}