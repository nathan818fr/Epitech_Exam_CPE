/*
** calc_sub.c for calc in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Nov  8 10:29:39 2014 Exam User
** Last update Sat Nov  8 10:50:11 2014 Exam User
*/

#include <calc.h>

int	calc_strnb_cmp(t_strnb *nb1, t_strnb *nb2)
{
  int	i;
  int	r;

  if (nb1->strlen == nb2->strlen)
    {
      i = nb1->strlen;
      while (i > 0)
	{
	  i = i - 1;
	  r = (int)nb2->str[i] - (int)nb1->str[i];
	  if (r != 0)
	    return (r);
	}
      return (0);
    }
  return (nb2->strlen - nb1->strlen);
}

void	calc_sub_char(t_strnb *nb1, t_strnb *nb2, int i, t_strnb *res)
{
  int	n1;
  int	n2;

  n1 = 0;
  n2 = 0;
  if (i < nb1->strlen)
    n1 = nb1->str[i];
  if (i < nb2->strlen)
    n2 = nb2->str[i];
  n1 = n1 - n2 - res->str[i];
  if (n1 < 0)
    {
      res->str[i + 1] = 1;
      n1 = 10 + n1;
    }
  res->str[i] = (n1 % 10);
  res->strlen = i + 1;
}

t_strnb		*calc_sub(t_strnb *nb1, t_strnb *nb2)
{
  t_strnb	*res;
  int		i;
  char		is_neg;

  is_neg = 0;
  if (calc_strnb_cmp(nb1, nb2) > 0)
    {
      res = nb1;
      nb1 = nb2;
      nb2 = res;
      is_neg = 1;
    }
  res = strnb_create(my_max(nb1->strlen, nb2->strlen) + 1);
  i = 0;
  while (i < nb1->strlen || i < nb2->strlen)
    {
      calc_sub_char(nb1, nb2, i, res);
      i = i + 1;
    }
  res->is_neg = is_neg;
  return (res);
}
