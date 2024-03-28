#include "monty.h"

/**
 * op_swap - this function swap the top element of stack.
 * @first: The first node
 * @increment: The line count
 * Return: void
 */

void op_swap(stack_t **first, unsigned int increment)
{
	stack_t *head;
	int length = 0, xau;

	head = *first;
	while (head)
	{
		head = head->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", increment);
		fclose(buff.file);
		free(buff.file_content);
		op_free_stack(*first);
		exit(EXIT_FAILURE);
	}
	head = *first;
	xau = head->n;
	head->n = head->next->n;
	head->next->n = xau;
}
