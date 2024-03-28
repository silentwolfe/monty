#include "monty.h"
#include <stdlib.h>

#define MAX_LINE_LENGTH 1024

int main(int argc, char *argv[])
{
    char file_content[MAX_LINE_LENGTH];
    FILE *file;
    unsigned int increment = 0;
    stack_t *stack = NULL;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    file = fopen(argv[1], "r");
    if (!file)
    {
        fprintf(stderr, "Error: can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while (fgets(file_content, MAX_LINE_LENGTH, file) != NULL)
    {
        execute(file_content, &stack, increment, file);
        increment++;
    }

    op_free_stack(stack);
    fclose(file);
    return 0;
}

