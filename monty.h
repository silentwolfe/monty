#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#define _POSIX_C_SOURCE 200809L
#define _GNU_SOURCE

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct store_t - The Variable consist of args files and line content
 * @lifo_flag: The flag changes from stack to queue
 * @arg: Containes the value
 * @file: It points to the file monty .m
 * @content: The line content
 */

typedef struct store_t
{
	int lifo_flag;
	char *arg;
	char *file_content;
	FILE *file;
} store_s;
extern store_s buff;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void op_push(stack_t **first, unsigned int increment);
void op_pall(stack_t **first, unsigned int increment);
void op_pint(stack_t **first, unsigned int increment);
int execute(char *file_content, stack_t **first, unsigned int increment, FILE *file);
void op_free_stack(stack_t *first);
void op_pop(stack_t **first, unsigned int increment);
void op_swap(stack_t **first, unsigned int increment);
void op_add(stack_t **first, unsigned int increment);
void op_nop(stack_t **first, unsigned int increment);
void op_sub(stack_t **first, unsigned int increment);
void op_div(stack_t **first, unsigned int increment);
void op_mul(stack_t **first, unsigned int increment);
void op_mod(stack_t **first, unsigned int increment);
void op_pchar(stack_t **first, unsigned int increment);
void op_pstr(stack_t **first, unsigned int increment);
void op_rotl(stack_t **first, unsigned int increment);
void op_rotr(stack_t **first, __attribute__((unused)) unsigned int increment);
void addingNode(stack_t **first, int n);
void addingQueue(stack_t **first, int n);
void op_queue(stack_t **first, unsigned int increment);
void op_stack(stack_t **first, unsigned int increment);
#endif
