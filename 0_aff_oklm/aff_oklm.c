/*
** aff_z.c for aff_z in /home/poirie-n/blinux/poirie_n/repo/MyProjects/Epitech_Exam_CPE/0_aff_z
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 15:05:01 2014 Nathan Poirier
** Last update Wed Dec 10 18:34:28 2014 Nathan Poirier
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

int	main()
{
  my_putstr("OKLM\n");
  return (0);
}
