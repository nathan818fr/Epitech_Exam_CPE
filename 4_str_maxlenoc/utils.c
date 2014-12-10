/*
** utils.c for exam in /home/poirie-n/blinux/poirie_n/repo/MyProjects/Epitech_Exam_CPE/4_str_maxlenoc
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 16:02:40 2014 Nathan Poirier
** Last update Wed Dec 10 16:02:47 2014 Nathan Poirier
*/

#include <stdlib.h>

int	my_putchar(char c)
{
  write(1, &c, 1);
  return (1);
}

int	my_putstr(char *str)
{
  int	l;

  l = 0;
  while (str[l])
    l++;
  write(1, str, l);
  return (l);
}

int	my_strlen(char *str)
{
  int	l;

  l = 0;
  while (str[l])
    l++;
  return (l);
}

char	*my_strduplen(char *str, int len)
{
  char	*dup;
  int	i;

  dup = malloc(len + 1);
  i = 0;
  while (i < len)
    {
      dup[i] = str[i];
      i++;
    }
  return (dup);
}
