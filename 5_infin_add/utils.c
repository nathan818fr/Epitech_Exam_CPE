/*
** utils.c for utils in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Nov  8 09:51:15 2014 Exam User
** Last update Sat Nov  8 10:16:55 2014 Exam User
*/

#include <stdlib.h>
#include "utils.h"

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  if (str == NULL)
    return (0);
  i = 0;
  while (str[i])
    i = i + 1;
  return (i);
}

int	my_max(int a, int b)
{
  if (b > a)
    return (b);
  return (a);
}
