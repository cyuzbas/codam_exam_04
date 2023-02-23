/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   brackets.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/23 20:23:53 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/23 22:00:20 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRACKETS_H
#define BRACKETS_H

#include <unistd.h>

int match_br(char open, char close);
char *check_br(char *str);

#endif