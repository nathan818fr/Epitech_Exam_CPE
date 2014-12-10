/*
** infin_add.c for infin_add in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Nov  8 09:48:20 2014 Exam User
** Last update Sat Nov  8 10:48:41 2014 Exam User
*/

#include <stdlib.h>
#include <stdio.h>
#include "calc.h"
#include "utils.h"

t_strnb		*str_to_strnb(char *str)
{
  t_strnb	*strnb;
  int		i;
  int		j;

  if (str == NULL)
    return (NULL);
  if ((strnb = malloc(sizeof(t_strnb))) == NULL)
    return (NULL);
  strnb->is_neg = (str[0] == '-');
  strnb->strlen = my_strlen(str) - (int)strnb->is_neg;
  if ((strnb->str = malloc(strnb->strlen + 1)) == NULL)
    return (NULL);
  i = strnb->strlen + (int)strnb->is_neg;
  j = 0;
  while (i > 0)
    {
      i = i - 1;
      strnb->str[j] = (str[i] - '0');
      j = j + 1;
    }
  strnb->str[j] = '\0';
  strnb_check(strnb);
  return (strnb);
}

t_strnb		*strnb_create(int len)
{
  t_strnb	*strnb;

  if ((strnb = malloc(sizeof(t_strnb))) == NULL)
    return (NULL);
  strnb->is_neg = 0;
  strnb->strlen = 0;
  if ((strnb->str = malloc(len + 1)) == NULL)
    return (NULL);
  strnb->str[len] = '\0';
  while (len > 0)
    {
      len = len - 1;
      strnb->str[len] = '\0';
    }
  return (strnb);
}

void	strnb_check(t_strnb *nb)
{
  int	i;

  if (nb == NULL)
    return ;
  if (!nb->is_neg)
    return ;
  i = 0;
  while (i < nb->strlen)
    {
      if (nb->str[i])
	return ;
      i = i + 1;
    }
  nb->is_neg = 0;
}

void	print_strnb(t_strnb *nb)
{
  int	i;
  char	p;

  if (nb == NULL)
    return ;
  strnb_check(nb);
  if (nb->is_neg)
    my_putchar('-');
  i = nb->strlen;
  p = 0;
  while (i > 0)
    {
      i = i - 1;
      if (p || nb->str[i])
	{
	  my_putchar(nb->str[i] + '0');
	  p = 1;
	}
    }
  if (p == 0)
    my_putchar('0');
}

int	main(int argc, char **argv)
{
  t_strnb	*nb1;
  t_strnb	*nb2;
  t_strnb	*res;

  if (argc > 2)
    {
      nb1 = str_to_strnb(argv[1]);
      nb2 = str_to_strnb(argv[2]);
      res = calc_add(nb1, nb2);
      print_strnb(res);
    }
  my_putchar('\n');
  return (0);
}
