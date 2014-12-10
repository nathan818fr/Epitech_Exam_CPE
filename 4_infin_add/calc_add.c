/*
** calc_add.c for calc in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Nov  8 10:10:02 2014 Exam User
** Last update Sat Nov  8 10:29:14 2014 Exam User
*/

#include "calc.h"

void	calc_add_char(t_strnb *nb1, t_strnb *nb2, int i, t_strnb *res)
{
  int	n1;
  int	n2;

  n1 = 0;
  n2 = 0;
  if (i < nb1->strlen)
    n1 = nb1->str[i];
  if (i < nb2->strlen)
    n2 = nb2->str[i];
  n1 = res->str[i] + n1 + n2;
  if (n1 > 9)
    {
      res->str[i + 1] = n1 / 10;
      res->strlen = i + 2;
    }
  res->str[i] = (n1 % 10);
  if (res->strlen < i + 1)
    res->strlen = i + 1;
}

t_strnb		*calc_add(t_strnb *nb1, t_strnb *nb2)
{
  t_strnb	*res;
  int		i;

  if (nb1->is_neg && !nb2->is_neg)
    {
      nb1->is_neg = 0;
      return (calc_sub(nb2, nb1));
    }
  if (nb2->is_neg && !nb1->is_neg)
    {
      nb2->is_neg = 0;
      return (calc_sub(nb1, nb2));
    }
  res = strnb_create(my_max(nb1->strlen, nb2->strlen) + 1);
  i = 0;
  while (i < nb1->strlen || i < nb2->strlen)
    {
      calc_add_char(nb1, nb2, i, res);
      i = i + 1;
    }
  if (nb1->is_neg && nb2->is_neg)
    res->is_neg = 1;
  return (res);
}
