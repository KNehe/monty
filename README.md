# Monty Language Interpreter

Monty is a scripting language that is first compiled into Monty byte codes. It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Directory and File Descriptions

- `/bf` - Contains BrainFuck Scripts
- `/bytecodes` - Contains sample monty `.m`  files for testing
- `add.c` - Adds the top two elements of the stack
- `div.c` - Divides the top two elements of the stack
- `free_stack.c` - Removes all elements from the stack
- `main.c` - Program entry point
- `mod.c` - Computes the rest of the division of the second
- `monty.h` - Contains all function prototypes
- `mul.c` - Multiplies the top two elements of the stack
- `nop.c` - Doesn't do anything
- `pall.c` - Prints all the values on the stack
- `pchar.c` - Prints the ascii value of int at the top of the stack
- `perform_operations.c` - Finds a particular function
- `pint.c` - Prints the value at the top of the stack
- `pop.c` - Removes the top element of the stack
- `process_string.c` - Splits string into tokens
- `pstr.c` - Prints the string starting at the top of the stack
- `push.c` - Adds a node to the beginning of the stack
- `rotl.c` - Rotates the stack to the top
- `rotr.c` - Rotates the stack to the bottom
- `sub.c` - Subtracts the top two elements of the stack
- `swap.c` - Subtracts the top two elements of the stack

## Installing
- Clone to repository
- Compile using  - `gcc -Wall -Werror -Wextra -pedantic -std=c90 *.c -o monty`

## Example

```
julien@ubuntu:~/monty$ cat bytecodes/07.m 
push 1
push 2
push 3
pall
pop
pall
pop
pall
pop
pall
julien@ubuntu:~/monty$ ./monty bytecodes/07.m
3
2
1
2
1
1
```

