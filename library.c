#include "library.h"

#include <stdio.h>

int 	trash(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	return (0);
}

void 	clean_window(void)
{
	tputs(tgetstr("cl", NULL), 1, ft_printnbr);
}


int 	set_env(char **env)
{
	clean_window();



}

int 	main(int argc, char **argv, char **env)
{
	trash(argc, argv);
	set_env(env);


	return (0);
}
