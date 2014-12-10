/*
** paramsum.c for exam in /home/poirie-n/blinux/poirie_n/repo/MyProjects/Epitech_Exam_CPE/1_paramsum
** 
** Made by Nathan Poirier
** Login   <poirie-n@epitech.net>
** 
** Started on  Wed Dec 10 15:46:27 2014 Nathan Poirier
** Last update Wed Dec 10 15:47:10 2014 Nathan Poirier
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putnbr(int nb)
{
  if (nb >= 10)
    my_putnbr(nb / 10);
  my_putchar('0' + (nb % 10));
}

int	main(int argc)
{
  my_putnbr(argc - 1);
  my_putchar('\n');
  return (0);
}
