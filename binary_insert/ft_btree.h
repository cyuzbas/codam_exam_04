/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_btree.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 15:09:51 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/24 15:19:23 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct s_btree
{
    struct s_btree  *left;
    struct s_btree  *right;
    int             *value;
    
}               t_btree;

#endif