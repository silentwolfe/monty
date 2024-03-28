#include "monty.h"

/**
 * op_push - The function adds nodes to the rear of the stack
 * @first: The first node
 * @increment: The line counter
 * Return: void
 */

void op_push(stack_t **first, unsigned int increment)
{
	int num, flag = 0, j = 0;

	if (buff.arg)
	{
		if (buff.arg[0] == '_')
		{
			j++;
		}
		for (; buff.arg[j] != '\0'; j++)
		{
			if (buff.arg[j] < 48 || buff.arg[j] > 57)
				flag = 1;
		}
	}

	if (flag == 1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", increment);
		fclose(buff.file);
		free(buff.file_content);
		op_free_stack(*first);
		exit(EXIT_FAILURE);
	}
	num = atoi(buff.arg);
	if (buff.lifo_flag == 0)
	{
		addingNode(first, num);
	}
	else
	{
		addingQueue(first, num);
	}
}
