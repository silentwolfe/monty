#include "monty.h"

/**
 * op_rotl - This function rotates the top stack
 * @first: The first element
 * @increment: The line counter
 * Return: void
 */

void op_rotl(stack_t **first, __attribute__((unused)) unsigned int increment)
{
	stack_t *temp = *first, *xau;

	if (*first == NULL || (*first)->next == NULL)
	{
		return;
	}
	xau = (*first)->next;
	xau->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *first;
	(*first)->next = NULL;
	(*first)->prev = temp;
	(*first) = xau;
}

