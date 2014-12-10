/*
** rostring.c for exam in /home/poirie-n/blinux/poirie_n/repo/MyProjects/Epitech_Exam_CPE/2_rostring
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 15:56:07 2014 Nathan Poirier
** Last update Wed Dec 10 16:00:00 2014 Nathan Poirier
*/

#include <stdlib.h>

void	my_putstr(char *str)
{
  int	l;

  l = 0;
  while (str[l])
    l++;
  write(1, str, l);
}

void	my_putsubstr(char *str, int s, int e, int ind)
{
  int	i;

  i = 0;
  while (s + i < e)
    {
      write(1, &str[s + i], 1);
      i++;
    }
  if (ind != 1)
    my_putstr(" ");
}

void	rostring(char *str, int pass)
{
  int	i;
  int	p;
  int	c;

  i = -1;
  c = 0;
  p = -1;
  while (((i = i + 1) || 1) && (i == 0 || str[i - 1]))
    {
      if (str[i] == ' ' || str[i] == '\t' || str[i] == '\0')
	{
	  if (p != -1 && (c = c + 1))
	    {
	      if ((c == 1 && pass == 1) || (c != 1 && pass == 0))
		my_putsubstr(str, p, i, c);
	      p = -1;
	    }
	}
      else if (p == -1)
	p = i;
    }
  if (pass == 0)
    rostring(str, 1);
}

int	main(int argc, char **argv)
{
  if (argc > 1)
    rostring(argv[1], 0);
  my_putstr("\n");
  return (0);
}
