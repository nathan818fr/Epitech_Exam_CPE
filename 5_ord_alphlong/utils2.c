/*
** utils.c for utils in /home/exam/rendu/ex_4
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Sat Nov  8 09:51:15 2014 Exam User
** Last update Sat Nov  8 11:40:25 2014 Exam User
*/

#include <stdlib.h>
#include "utils.h"

int	my_int_cmp(void *n1, void *n2)
{
  if (n1 == NULL || n2 == NULL)
    return (0);
  return (*(int *)n1 - *(int *)n2);
}

void    my_str_cpy(char *dst, char *str, int s, int e)
{
  int   i;

  i = 0;
  while (s + i < e)
    {
      dst[i] = str[s + i];
      i = i + 1;
    }
  dst[i] = '\0';
}

int	my_is_alpha(char c)
{
  return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	my_alphstr_charcmp(char c1, char c2)
{
  if (my_is_alpha(c1) && my_is_alpha(c2))
    {
      if (c1 >= 'a' && c1 <= 'z')
	c1 = c1 + ('A' - 'a');
      if (c2 >= 'a' && c2 <= 'z')
        c2 = c2 + ('A' - 'a');
    }
  return (c1 - c2);
}

int	my_alphstr_cmp(void *v1, void *v2)
{
  char	*s1;
  char	*s2;
  int	i;
  int	r;

  if (v1 == NULL || v2 == NULL)
    return (0);
  s1 = (char *)v1;
  s2 = (char *)v2;
  i = 0;
  while (s1[i])
    {
      r = my_alphstr_charcmp(s1[i], s2[i]);
      if (r != 0)
	return (r);
      i = i + 1;
    }
  return (my_alphstr_charcmp(s1[i], s2[i]));
}
