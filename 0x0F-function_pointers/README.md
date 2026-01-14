# 0x0F. Function Pointers

## Description
This project covers the use of **function pointers** in C. It demonstrates how to:
- Pass functions as arguments
- Use function pointers to execute code dynamically
- Build a simple calculator using function pointers
- Print the opcodes of your own functions

## Requirements
- C code compiled on **Ubuntu 20.04 LTS**
- Compiler flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No global variables
- Only standard library functions: `malloc`, `free`, `exit` (exceptions where `printf` or `_putchar` is allowed)
- Each file must end with a newline
- Maximum 5 functions per file unless stated otherwise

## File Structure

0x0F-function_pointers/
├─ 0-print_name.c
├─ 1-array_iterator.c
├─ 2-int_index.c
├─ 3-calc.h
├─ 3-op_functions.c
├─ 3-get_op_func.c
├─ 3-main.c (optional)
├─ 100-main_opcodes.c
└─ function_pointers.h



## Tasks

### 0. Print a name
Function `print_name` executes a function pointer to print a given name.

### 1. Array iterator
Function `array_iterator` executes a function on each element of an integer array.

### 2. Integer index search
Function `int_index` searches an array for an integer using a function pointer.

### 3. Calculator
A simple calculator program using function pointers:
- Usage: `./calc num1 operator num2`
- Operators: `+`, `-`, `*`, `/`, `%`
- Handles errors for wrong args, invalid operator, division/modulo by 0

### 4. Print opcodes
Program `100-main_opcodes.c` prints the opcodes of its own main function in hexadecimal.

## Compilation Examples
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-print_name.c -o a
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c 1-array_iterator.c -o b
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c 2-int_index.c -o c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
gcc -std=gnu89 100-main_opcodes.c -o main

