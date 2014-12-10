##
## Makefile for exam in /home/poirie-n/blinux/poirie_n/repo/MyProjects/Epitech_Exam_CPE/1_rotone
## 
## Made by Nathan Poirier
## Login   <poirie-n@epitech.net>
## 
## Started on  Wed Dec 10 15:13:33 2014 Nathan Poirier
## Last update Wed Dec 10 15:59:16 2014 Nathan Poirier
##

NAME	= rostring

SRCS	= rostring.c

OBJS	= $(SRCS:.c=.o)

$(NAME):	$(OBJS)
	cc $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
	rm $(OBJS)

fclean:		clean
	rm $(NAME)

re:	fclean all

.PHONY: all clean fclean re
