#include "monty.h"

/**
 * op_div - The function divides the first two nodes
 * @first: The first element
 * @increment: The line count
 * Return: Void
 */

void op_div(stack_t **first, unsigned int increment)
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
		fprintf(stderr, "L%d: division by zero\n", increment);
		fclose(buff.file);
		free(buff.file_content);
		op_free_stack(*first);
		exit(EXIT_FAILURE);
	}
	xau = head->next->n / head->n;
	head->next->n = xau;
	*first = head->next;
	free(head);
}
