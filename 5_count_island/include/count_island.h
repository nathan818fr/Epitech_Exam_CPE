/*
** count_island.h for count_island in /home/exam/rendu/ex_10
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Oct 25 13:02:09 2014 Exam User
** Last update Sat Oct 25 14:31:02 2014 Exam User
*/

#ifndef COUNT_ISLAND_H_
# define COUNT_ISLAND_H_

typedef struct s_ilist
{
  char			*line;
  int			*len;
  struct s_ilist	*prev;
  struct s_ilist	*next;
} t_ilist;

#endif /* !COUNT_ISLAND_H_ */
