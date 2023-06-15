A library is a collection of code routines (functions, classes, variables, and so on) that can be called upon when building our program, so instead of writing it ourselves, we can go and get it from something that has already been written and optimized. That is where the idea behind libraries comes from. We are reusing blocks of codes that have come from somewhere else.

Basically, we have two kinds of libraries:

static libraries
shared (or dynamic) libraries
The main reason for writing a library is to allow code reusability, thus save considerable development time.
HOW TO CREATE STATIC LIBRARIES
To create a static library, we need to specify to the compiler, which is GCC in our case, that we want to compile all library codes (*.c) into object files (*.o) without linking. To do that we are going to use the command below.
$ gcc -c -Wall -Werror -Wextra *.c
Flags description:
-c: Compile and assemble, but do not link.
-Wall, -Werro and -Wextra: These aren’t necessary but they are recommended to generate better code.

Note that the "*.c" matches all files in the current working directory with the ".c" extension.

For example, let us take two c files, add.c, and mul.c which make respectively the addition and the multiplication of two integers, and a header file that contains the prototypes of these functions. The picture below shows the output generated after using the command.
