/*
** do_op.c for exam in /home/poirie-n/blinux/poirie_n/repo/MyProjects/Epitech_Exam_CPE/1_do_op
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 15:19:33 2014 Nathan Poirier
** Last update Wed Dec 10 15:20:10 2014 Nathan Poirier
*/

#include <stdio.h>

void	do_op(char *nb1, char *op, char *nb2)
{
  int	n1;
  int	n2;
  int	r;

  n1 = atoi(nb1);
  n2 = atoi(nb2);
  r = 0;
  if (op[0] == '+')
    r = n1 + n2;
  else if (op[0] == '-')
    r = n1 - n2;
  else if (op[0] == '*')
    r = n1 * n2;
  else if (op[0] == '/')
    r = n1 / n2;
  else if (op[0] == '%')
    r = n1 % n2;
  printf("%d\n", r);
}

int	main(int argc, char **argv)
{
  if (argc == 4)
    do_op(argv[1], argv[2], argv[3]);
  else
    printf("\n");
  return (0);
}
