#include "monty.h"

/**
 * op_pop - The function remove the first element
 * @first: The first node
 * @increment: the line count
 * Return: void
 */

void op_pop(stack_t **first, unsigned int increment)
{
	stack_t *head;

	if (*first == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", increment);
		fclose(buff.file);
		free(buff.file_content);
		op_free_stack(*first);
		exit(EXIT_FAILURE);
	}
	head = *first;
	*first = head->next;
	free(head);
}

