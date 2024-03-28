#include "monty.h"

/**
 * op_mod - This function performs modulo on the element
 * @first: The first node
 * @increment: the line count
 * Return: void
 */

void op_mod(stack_t **first, unsigned int increment)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", increment);
		fclose(buff.file);
		free(buff.file_content);
		op_free_stack(*first);
		exit(EXIT_FAILURE);
	}
	head = *first;
	if (head->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", increment);
		fclose(buff.file);
		free(buff.file_content);
		op_free_stack(*first);
		exit(EXIT_FAILURE);
	}
	xau = head->next->n % head->n;
	head->next->n = xau;
	*first = head->next;
	free(head);
}
