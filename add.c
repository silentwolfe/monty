#include "monty.h"

/**
 * op_add - This function adds the first two data element of
 * the stack
 * @first: The first node
 * @increment: The line count
 * Return: Void
 */

void op_add(stack_t **first, unsigned int increment)
{
	stack_t *head;
	int xau, length = 0;

	head = *first;

	while (head)
	{
		head = head->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", increment);
		fclose(buff.file);
		free(buff.file_content);
		op_free_stack(*first);
		exit(EXIT_FAILURE);
	}
	head = *first;
	xau = head->n + head->next->n;
	head->next->n = xau;
	*first = head->next;
	free(head);
}
