#include "monty.h"

/**
 * op_pall - The function Prints all the stack
 * @first: The first node
 * @increment: (unused)
 * Return: void
 */

void op_pall(stack_t **first, unsigned int increment)
{
	stack_t *head;
	(void)increment;

	head = *first;
	if (head == NULL)
	{
		return;
	}
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
