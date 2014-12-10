/*
** aff_first_param.c for exam in /home/poirie-n/blinux/poirie_n/repo/MyProjects/Epitech_Exam_CPE/1_aff_first_param
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 19:04:33 2014 Nathan Poirier
** Last update Wed Dec 10 19:05:57 2014 Nathan Poirier
*/

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  write(1, str, i);
}

int	main(int argc, char **argv)
{
  if (argc > 1)
    my_putstr(argv[1]);
  my_putstr("\n");
  return (0);
}
