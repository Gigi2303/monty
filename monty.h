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
 * @s_length: tracks the num of nodes in the stack
 * @stack: to determine if to use stack or queue data structure
 * @head: top of stack
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
	int s_length;
	stack_t *head;
	instruction_t *instruct;
	int stack;
	void (*f)(stack_t **, unsigned int);
}argument_t;

extern argument_t *statements;


void failed_getstream(char *file_name);
void malloc_fails(void);
void getstream(char *file_name);
void initialise_arg();
void validate_arg(int argc);
int main(int argc, char **argv);
void token_line(void);
void f_add(stack_t **head, unsigned int line_count);
void f_div(stack_t **stack, unsigned int line_count);
void free_all(void);
void free_s(stack_t *head);
void free_h(void);
void free_arg(void);
void f_push(stack_t **stack, unsigned int line_count);
void run_instructions(void);
void instruct_error(void);
void fetch_instructions(void);
void f_mod(stack_t **stack, unsigned int line_count);
int num_check(char *str);
void s_close(void);
void f_mul(stack_t **stack, unsigned int line_count);
void f_nop(stack_t **head, unsigned int line_count);
void f_pall(stack_t **head, unsigned int counter);
void f_pint(stack_t **head, unsigned int counter);
void f_pop(stack_t **head, unsigned int counter);
void f_sub(stack_t **stack, unsigned int line_count);
void f_swap(stack_t **stack, unsigned int line_count);
void free_token(void);
void f_queue(stack_t **stack, unsigned int line_count);
void token_line(void);
void del_stacknode(void);
void f_pchar(stack_t **stack, unsigned int line_count);
void f_rotl(stack_t **stack, unsigned int line_count);
void f_rotr(stack_t **stack, unsigned int line_count);
void f_pstr(stack_t **stack, unsigned int line_count);

#endif /* MONTY_H */
