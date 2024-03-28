#include "monty.h"

/**
 * op_free_stack - This function frees doubly linked lists
 * @first: the first node
 */

void op_free_stack(stack_t *first)
{
	stack_t *xau;

	xau = first;
	while (first)
	{
		xau = first->next;
		free(first);
		first = xau;
	}
}
