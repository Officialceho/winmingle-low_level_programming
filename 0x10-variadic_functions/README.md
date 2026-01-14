# 0x10. Variadic Functions

## Author
**Okoye Chijioke Henry**

## Program
WinMingle Community C Training

## Description
This project covers **variadic functions** in C, allowing functions to accept a variable number of arguments. It demonstrates the use of:

- `va_start`  
- `va_arg`  
- `va_end`  

It also explains the use of the `const` type qualifier in function parameters.

## Tasks

### 0. Sum Them All
**File:** `0-sum_them_all.c`  
**Prototype:** `int sum_them_all(const unsigned int n, ...);`  
Returns the sum of all parameters. If `n == 0`, returns `0`.

### 1. Print Numbers
**File:** `1-print_numbers.c`  
**Prototype:** `void print_numbers(const char *separator, const unsigned int n, ...);`  
Prints numbers separated by a given separator. Prints a newline at the end. If `separator` is `NULL`, it is ignored.

### 2. Print Strings
**File:** `2-print_strings.c`  
**Prototype:** `void print_strings(const char *separator, const unsigned int n, ...);`  
Prints strings separated by a separator. Prints `(nil)` if a string is `NULL`. Prints a newline at the end. Ignores `NULL` separator.

### 3. Print All
**File:** `3-print_all.c`  
**Prototype:** `void print_all(const char * const format, ...);`  
Prints anything based on a format string (`c` = char, `i` = int, `f` = float, `s` = string). Ignores unknown format specifiers. Prints `(nil)` if string argument is `NULL`. Prints a newline at the end.

## Compilation
Compile using **Ubuntu 20.04 LTS** and **GCC**:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <main_file.c> <task_file.c> -o <output_name>

To run the compiled program, use "./<output_name>"
