0x19. C - Stacks, Queues - LIFO, FIFO
The monty program

Usage: monty file
where file is the path to the file containing Monty byte code
If the user does not give any file or more than one argument to your program, print the error message USAGE: monty file, followed by a new line, and exit with the status EXIT_FAILURE
If, for any reason, it’s not possible to open the file, print the error message Error: Can't open file <file>, followed by a new line, and exit with the status EXIT_FAILURE
where <file> is the name of the file
If the file contains an invalid instruction, print the error message L<line_number>: unknown instruction <opcode>, followed by a new line, and exit with the status EXIT_FAILURE
where is the line number where the instruction appears.
Line numbers always start at 1
The monty program runs the bytecodes line by line and stop if either:
it executed properly every line of the file
it finds an error in the file
an error occured
If you can’t malloc anymore, print the error message Error: malloc failed, followed by a new line, and exit with status EXIT_FAILURE.

You have to use malloc and free and are not allowed to use any other function from man malloc (realloc, calloc, …)

Tasks
0. push, pall

1. pint
mandatory
Implement the pint opcode.

2. pop
mandatory
Implement the pop opcode.

3. swap
mandatory
Implement the swap opcode.

4. add
mandatory
Implement the add opcode.

5. nop
mandatory
Implement the nop opcode

6. sub
#advanced
Implement the sub opcode.

7. div
#advanced
Implement the div opcode.

8. mul
#advanced
Implement the mul opcode.

9. mod
#advanced
Implement the mod opcode.

10. comments
#advanced
Every good language comes with the capability of commenting. When the first non-space character of a line is #, treat this line as a comment (don’t do anything).

11. pchar
#advanced
Implement the pchar opcode.

12. pstr
#advanced
Implement the pstr opcode.

13. rotl
#advanced
Implement the rotl opcode.

14. rotr
#advanced
Implement the rotr opcode.

15. stack, queue
#advanced
Implement the stack and queue opcodes.

16. Brainf*ck
#advanced
Write a Brainf*ck script that prints School, followed by a new line.
17. Add two digits
#advanced
Add two digits given by the user.

Read the two digits from stdin, add them, and print the result
The total of the two digits with be one digit-long (<10)

18. Multiplication
#advanced
Multiply two digits given by the user.

Read the two digits from stdin, multiply them, and print the result
The result of the multiplication will be one digit-long (<10)

19. Multiplication level up
#advanced
Multiply two digits given by the user.


