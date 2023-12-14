#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
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
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct argument_s - This holds the variables
 * @stream: file that is connected to the file
 * @line: line of stream read from file
 * @line_count: the current line of stream
 * @token: stores the token from the stream
 * @instruct: a correct instruction from the line
 * @token_num: number of tokens
 *
 * Description: holds variables that will be usedin different functions
 * of stack, queues, LIFO, FIFO project
 */
typedef struct argument_s
{
	FILE *stream;
	char *line;
	unsigned int line_count;
	char **token;
	int token_num;
	instruction_t *instruct;
}argument_t;


void failed_getstream(char *file_name);
void malloc_fails(void);
void getstream(char *file_name);
void initialise_arg();
void validate_arg(int argc);
int main(int argc, char **argv);

#endif /* MONTY_H */
