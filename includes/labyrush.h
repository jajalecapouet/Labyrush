/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   labyrush.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaros <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:47:25 by njaros            #+#    #+#             */
/*   Updated: 2022/03/19 14:06:07 by njaros           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LABYRUSH_H
# define LABYRUSH_H

# include "libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>
# include <sys/time.h>
# include <math.h>
# include <fcntl.h>

typedef struct s_pos
{
	int	x;
	int	y;
}	t_pos;

typedef struct noeud
{
    int				x;
    int				y;
    int				val;
    int				cout;
    struct noeud	*parent;
}	noeud;

// Ptites fonctions utiles

void	free_tabtab(int **to_free);
void	freeteuse(void *to_free);
void	aff_maze(char **maze);

// Fonctions moins petites

int		aff_vue_perso(char **maze, t_pos p, int lg, int ht);
int		keskiladi(char **maze, char *lecture, t_pos *pers, int *timer, int *victoire, int *rip);
int		a_star(char **map, int row, int col, int xa, int ya, int xb, int yb);
char	**mazer(int *lg, int *ht, t_pos *perso, t_pos *objectif);

#endif
