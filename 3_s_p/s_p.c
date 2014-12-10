/*
** s_p.c for exam in /home/poirie-n/blinux/poirie_n/repo/MyProjects/Epitech_Exam_CPE/3_s_p
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 15:34:59 2014 Nathan Poirier
** Last update Wed Dec 10 15:37:17 2014 Nathan Poirier
*/

#include <stdio.h>

void	s_p(int r)
{
  int	nb;
  int	n;

  nb = 0;
  n = r;
  while (n != 1)
    {
      nb++;
      if (n % 2 == 1)
	n = n * 3 + 1;
      else
	n /= 2;
    }
  nb++;
  printf("%d %d\n", r, nb);
}

int	main()
{
  int	i;

  i = 1;
  while (i <= 100)
    {
      s_p(i);
      i++;
    }
  return (0);
}
