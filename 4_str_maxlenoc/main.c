/*
** main.c for exam in /home/poirie-n/blinux/poirie_n/repo/MyProjects/Epitech_Exam_CPE/4_str_maxlenoc
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 16:02:56 2014 Nathan Poirier
** Last update Wed Dec 10 16:03:08 2014 Nathan Poirier
*/

#include <stdlib.h>
#include <stdio.h>

char	*my_strduplen(char *str, int len);

int	str_cnt(char *str, char *find, int len)
{
  int	i;
  int	p;

  i = 0;
  p = 0;
  while (str[i])
    {
      if (str[i] == find[p])
	{
	  p++;
	  if (p >= len)
	    return (1);
	}
      else
	p = 0;
      i++;
    }
  return (0);
}

int	find_part(char **tab, int pos, char *str, int len)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    {
      if (i != pos && !str_cnt(tab[i], str, len))
	return (0);
      i++;
    }
  return (1);
}

int	find(char **tab, int pos, char **res)
{
  char	*str;
  int	len;
  int	i;
  int	j;

  str = tab[pos];
  len = my_strlen(str);
  i = 0;
  while (len - i > 0)
    {
      j = 0;
      while (j <= i)
	{
	  if (find_part(tab, pos, str + j, len - i))
	    {
	      if (*res == NULL || len > my_strlen(*res))
		*res = my_strduplen(str + j, len - i);
	      return (1);
	    }
	  j++;
	}
      i++;
    }
  return (0);
}

int	main(int argc, char **argv)
{
  char	*res;
  char	**tab;
  int	i;

  tab = malloc(sizeof(char *) * argc);
  i = 0;
  while(i + 1 < argc)
    {
      tab[i] = argv[argc - i - 1];
      i++;
    }
  tab[i] = NULL;
  i = 0;
  res = NULL;
  while (tab[i] != NULL)
    {
      find(tab, i, &res);
      i++;
    }
  if (res != NULL)
    my_putstr(res);
  my_putchar('\n');
  return (0);
}
