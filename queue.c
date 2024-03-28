#include "monty.h"

/**
 * op_queue - This fucntion prints the top of the stack
 * @first: The first element
 * @increment: The line counter
 * Return: Void
 */

void op_queue(stack_t **first, unsigned int increment)
{
	(void)first;
	(void)increment;
	buff.lifo_flag = 1;
}

/**
 * addingQueue - This function adds node element to end of stack
 * @num: The new value
 * @first: The firts element of the stack
 * Return: void
 */
void addingQueue(stack_t **first, int num)
{
	stack_t *node, *xau;

	xau = *first;
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error\n");
	}
	node->n = num;
	node->next = NULL;
	if (xau)
	{
		while (xau->next)
		{
			xau = xau->next;
		}
	}

	if (!xau)
	{
		*first = node;
		node->prev = NULL;
	}
	else
	{
		xau->next = node;
		node->prev = xau;
	}
}
