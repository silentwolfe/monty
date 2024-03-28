#include "monty.h"

/**
 * addingNode - The function adds node to stack
 * @first: The first node
 * @num: The new value
 * Return: void
 */

void addingNode(stack_t **first, int n)
{
	stack_t *xau, *node;

	xau = *first;
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (xau)
	{
		xau->prev = node;
	}
	node->n = n;
	node->next = *first;
	node->prev = NULL;
	*first = node;
}
