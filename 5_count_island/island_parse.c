/*
** island_parse.c for count_island in /home/exam/rendu/ex_10
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Oct 25 13:59:59 2014 Exam User
** Last update Wed Dec 10 19:44:07 2014 Nathan Poirier
*/

#include <stdlib.h>
#include <count_island.h>

void	island_parse_sg_check(t_ilist *island, int i, char nb)
{
  char	*str;

  str = island->line;
  if (str[i] != 'X')
    return ;
  str[i] = nb;
  if (str[i + 1])
    island_parse_sg_check(island, i + 1, nb);
  if (i > 1)
    island_parse_sg_check(island, i - 1, nb);
  if (island->next != NULL && i < *(island->next->len))
    island_parse_sg_check(island->next, i, nb);
  if (island->prev != NULL && i < *(island->prev->len))
    island_parse_sg_check(island->prev, i, nb);
}

void	island_parse_sg(t_ilist *island, int *ind)
{
  int	i;
  char	*str;

  i = 0;
  str = (char *)island->line;
  while (str[i])
    {
      if (str[i] == 'X')
	{
	  island_parse_sg_check(island, i, '0' + ((*ind) % 10));
	  *ind = (*ind) + 1;
	}
      i = i + 1;
    }
}

void	island_parse(t_ilist *island)
{
  int	ind;

  ind = 0;
  while (island != NULL)
    {
      island_parse_sg(island, &ind);
      island = island->next;
    }
}
