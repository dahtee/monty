#ifndef _STACK_H_
#define _STACK_H_

/**
 * struct stack_s - Doubly linked list representation of a stack
 * @n: Integer
 * @prev: Points to the previous element of the stack
 * @next: Points to the next element of the stack
 *
 * Description: Doubly linked list node structure
 * for stack implementation
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack implementation
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

#endif /* _STACK_H_ */
