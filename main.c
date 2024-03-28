#include "monty.h"
#include <stdio.h>
store_s buff = {0, NULL, NULL, NULL};
/**
 * main - The Montybyte code interpreter
 * @argc: The numbers of argument on the shell
 * @argv: The argment Vector
 * Return: return 0 success and 1 Failed
 */
int main(int argc, char *argv[])
{
	size_t len = 0;
	stack_t *stack = NULL;
	char *file_content;
	FILE *file;
	unsigned int increment = 0;
	ssize_t read_line = 1;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	buff.file = file;

	if (!file)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}


	while (read_line > 0)
	{
		file_content = NULL;
		read_line = getline(&file_content, &len, file);
		buff.file_content = file_content;
		increment++;
		if (read_line > 0)
		{

			execute(file_content, &stack, increment, file);
		}
		free(file_content);
	}
	op_free_stack(stack);
	fclose(file);
return (0);
}
