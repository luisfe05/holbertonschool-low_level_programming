# C - Hello, World

Holberton School project to learn the basics of the C programming language: the compilation process (preprocessor, compiler, assembler, linker), how to print output with `puts` and `printf`, and how to check the size of data types.

## Tasks

| # | File | Description |
|---|------|-------------|
| 0 | `0-preprocessor` | Runs a C file through the preprocessor and saves the result into a file called `c`. The C file name is stored in `$CFILE`. |
| 1 | `1-compiler` | Compiles a C file but does not link. The C file name is stored in `$CFILE`. |
| 2 | `2-assembler` | Generates the assembly code of a C file and saves it in a file. The C file name is stored in `$CFILE`. |
| 3 | `3-name` | Compiles a C file and creates an executable named `cisfun`. The C file name is stored in `$CFILE`. |
| 4 | `4-puts.c` | C program that prints `"Programming is like building a multilingual puzzle` using `puts`. |
| 5 | `5-printf.c` | C program that prints `with proper grammar, but the outcome is a piece of art,` using `printf`. |
| 6 | `6-size.c` | C program that prints the size in bytes of various data types (`char`, `int`, `long int`, `long long int`, `float`). |

## How to run

For the shell scripts:

```
CFILE=main.c ./0-preprocessor
```

For the C programs:

```
gcc -Wall -Werror -Wextra -pedantic 4-puts.c -o puts
./puts
```

## Author

Luis — Holberton School