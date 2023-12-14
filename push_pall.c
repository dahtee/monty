#include <stdio.h>
#include <stdlib.h>

stack_t *stack;

/**
 * push - Push an element to the stack
 * @line_number: Line number opcode is on
 * @argument: Argument passed to push opcode
 *
 * Return: void
*/
void push(unsigned int line_number, char *argument)
{
        int n;

        if (!argument) {
                fprintf(stderr, "L%u: usage: push integer\n", line_number);
                exit(EXIT_FAILURE);
        }

        n = atoi(argument);
        
        stack_t new_node;
        new_node.n = n;
        new_node.next = stack;
        new_node.prev = NULL;
        if (stack)
                stack->prev = &new_node;
        stack = &new_node;        
}

/**
 * pall - Print all values on the stack
 *
 * Return: void
*/
void pall(void)
{
        stack_t *tmp = stack;
        
        while (tmp) {
                printf("%d\n", tmp->n);
                tmp = tmp->next;
        }        
}
