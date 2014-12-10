##
## Makefile for exam in /home/poirie-n/blinux/poirie_n/repo/MyProjects/Epitech_Exam_CPE/4_str_maxlenoc
## 
## Made by Nathan Poirier
## Login   <poirie-n@epitech.net>
## 
## Started on  Wed Dec 10 16:02:10 2014 Nathan Poirier
## Last update Wed Dec 10 16:02:11 2014 Nathan Poirier
##

NAME	= str_maxlenoc

CC	= cc

RM	= rm -f

SRC	= main.c	\
	  utils.c

OBJ	= $(SRC:.c=.o)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	clean	fclean	all

.PHONY:	all clean fclean re
