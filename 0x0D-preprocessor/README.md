# WinMingle C Preprocessor Project

## Project Overview
This project is part of the WinMingle Software Engineering Program.  
The main goal is to understand and implement **C preprocessor features** such as macros, function-like macros, and include guards.

## Learning Objectives
By the end of this project, you should be able to explain and use:
- Macros and how they work.
- Object-like and function-like macros.
- Common predefined macros: `__FILE__`, `__LINE__`, `__DATE__`, `__TIME__`.
- Properly protect header files using include guards.

## Project Structure

0x0D-preprocessor/
├── 0-object_like_macro.h # SIZE macro
├── 1-pi.h # PI macro
├── 2-main.c # Print current file name
├── 3-function_like_macro.h # ABS macro
├── 4-sum.h # SUM macro
├── README.md # Project overview


## Files Description
1. **0-object_like_macro.h** – Defines a macro `SIZE` as `1024`.
2. **1-pi.h** – Defines a macro `PI` as `3.14159265359`.
3. **2-main.c** – Prints the name of the file it was compiled from.
4. **3-function_like_macro.h** – Function-like macro `ABS(x)` that computes the absolute value.
5. **4-sum.h** – Function-like macro `SUM(x, y)` that computes the sum of `x` and `y`.

## Compilation
Use the following command to compile each file:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file>.c -o <output>

