#include "monty.h"

/**
 * op_mul - The opcode function multiples the first two elements
 * @first: The first node
 * @increment: The line couunt
 * Return: void
 */

void op_mul(stack_t **first, unsigned int increment)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", increment);
		fclose(buff.file);
		free(buff.file_content);
		op_free_stack(*first);
		exit(EXIT_FAILURE);
	}
	head = *first;
	xau = head->next->n * head->n;
	head->next->n = xau;
	*first = head->next;
	free(head);
}
