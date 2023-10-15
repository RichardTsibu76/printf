<<<<<<< HEAD
Overview of the custom printf function
This project is a C programming implementation of a custom printf function. This project seeks to provide a condensed yet extendable version of the powerful printf function included in the C language library.

Features
Supports frequently used format specifiers, including %d, %s, %c, %f, etc.
Allows for formatting choices for width and precision, such as %10s, %.2f.
Variable parameters: Uses the ellipsis (...) syntax to handle a variable number of parameters.
=======
0x11. C - printf
Concepts
For this project, we expect you to look at these concepts:

Group Projects
Pair Programming - How To
Flowcharts
Technical Writing
Printf function brief - What to know to create your own Printf function
All about Team Projects + Pairings + FAQ (A must read)

Resources
Read or watch:

Secrets of printf
Group Projects concept page (Don’t forget to read this)
Flowcharts concept page
man or help:

printf (3)

Authorized functions and macros
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

Tasks
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
mandatory
Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
Repo:

1. Education is when you read the fine print. Experience is what you get if you don't
mandatory
Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
Repo:

GitHub repository: printf
>>>>>>> 0b955e5fe90f0b4298e403ad364607a7b1c34ef5
