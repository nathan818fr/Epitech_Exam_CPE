/*
** my_utils.c for utils in /home/exam/rendu/ex_10
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Oct 25 13:00:26 2014 Exam User
** Last update Sat Oct 25 13:58:50 2014 Exam User
*/

#include <stdlib.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  if (str != NULL)
    {
      i = 0;
      while (str[i])
	{
	  my_putchar(str[i]);
	  i = i + 1;
	}
    }
}
