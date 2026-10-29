#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("%c\n", 'd');
	printf("%s\n", "string");
	printf("%d\n", -20);
	printf("%i\n", 10);
	printf("%u\n", 20);
}

//voir pour les fonctions variadic (va_...) (c'est les , ... dans ft_printf(const char *, ...))
//le const char * en parametre va prendre le %c genre if (str == %c) if(str == %s) ....
//ft_putchar pour le %c, ft_putstr pour le %s, ft_putnbr pour le %d et peut etre le %% aussi??
//%i voir pour le cas où le deuxième paramètre est un négatif, ca fait un truc spécial.
//%x et %X a voir avec un ft_putnbr mais en hexadecimal, avec un ft_convert et un tolower et toupper en fonction de x ou X