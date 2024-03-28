#include "monty.h"

/**
 * op_pstr - This function prints a strings from the top
 * @first: The first node
 * @increment: The line count
 * Return: Void
 */

void op_pstr(stack_t **first, unsigned int increment)
{
	stack_t *head;
	(void)increment;

	head = *first;
	while (head)
	{
		if (head->n <= 0 || head->n > 127)
		{
			break;
		}
		printf("%c", head->n);
		head = head->next;
	}
	printf("\n");
}
