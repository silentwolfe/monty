#include "monty.h"

/**
 * op_rotr - This fucntion rotates the stack to bottom
 * @first: The first node
 * @increment: the line counter
 * Return: void
 */

void op_rotr(stack_t **first, __attribute__((unused)) unsigned int increment)
{
	stack_t *head_copy;

	head_copy = *first;
	if (*first == NULL || (*first)->next == NULL)
	{
		return;
	}
	while (head_copy->next)
	{
		head_copy = head_copy->next;
	}
	head_copy = *first;
	head_copy->prev->next = NULL;
	head_copy->prev = NULL;
	(*first)->prev = head_copy;
	(*first) = head_copy;
}


