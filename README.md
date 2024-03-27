![Logo](https://media.licdn.com/dms/image/D5612AQEZDCDbq8DKEQ/article-cover_image-shrink_600_2000/0/1683863373095?e=2147483647&v=beta&t=K2NKtvEyjQmCz-S6wXUr1GPL8yHvYAsvFkqBfrvoTZM)


# Holbertonschool-printf
In this repository you will find our Printf project.
## Requirements
### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation; do not push your own main.c file. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called main.h
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the _putchar function for this project
## Compilation
Your code will be compiled this way:
```http
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
## Files description
| Files     | Description                       |
| :------- | :-------------------------------- |
| `main.h` | Contain libraries, structure and function prototypesch |
| `man_3_printf` | The manual of our printf function |
| `0_task` | The manual of our printf function |
| `each_case.c` | All the functions to handle various format specifers for our "printf" |
| `get_format.c` | The get_format.c file contains the get_formater function, which associates the correct formatting function according to the format specifier provided in the printf function. |
| `_printf.c` | It's the main entry point of our printf project. |

## Authors

- [@Taqiyeddine BOUDIAF](https://www.github.com/Rippedz)
- [@Lucas NEGRE](https://www.github.com/LucasNGRE)
