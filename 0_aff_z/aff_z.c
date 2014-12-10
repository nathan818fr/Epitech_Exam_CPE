/*
** aff_z.c for aff_z in /home/poirie-n/blinux/poirie_n/repo/MyProjects/Epitech_Exam_CPE/0_aff_z
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 15:05:01 2014 Nathan Poirier
** Last update Wed Dec 10 15:05:28 2014 Nathan Poirier
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	main()
{
  my_putchar('z');
  my_putchar('\n');
  return (0);
}
