# 00 - Holberton School low level programming

![Logo Holberton](/img/hbtn.png)

In this project we will look at concepts such as C and Unix programming, data structures, algorithms, as well as reverse engineering and security protocols

### Concepts

+ C programming
+ Pointers & arrays
+ C static libraries
+ Automatic and dynamic allocation, malloc and free
+ Data structures
+ Binary operations
+ Binary trees
+ Hash tables
+ Sorting algorithms

### Data types

| Type | Storage Size | Value range |
| ---- | ------------ | ----------- |
| char | 1 byte | -128 to 127 |
| unsigned char | 1 byte | 0 to 255 |
| short | 2 byte | -32,768 to 32,767 |
| unsigned short | 2 byte | 0 to 65,535 |
| int | 4 byte | -2,147,483,648 to 2,147,483,647 |
| unsigned int | 4 byte | 0 to 4,294,967,295 |
| long | 8 byte | −9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |
| unsigned long | 8 byte | 0 to 18,446,744,073,709,551,61 |

### Binary operators

Bitwise operations

+ `|` OR
+ `&` AND
+ `<<` LEFT SHIFT
+ `>>` RIGHT SHIFT
+ `^` XOR
+ `~` NOT

Expression operator 

```c
a = 402; /* 00000001 10010010, 402 */
b = 98;  /* 00000000 01100010, 98 */
a | b;   /* 00000001 11110010, 498 */
a & b;   /* 00000000 00000010, 2 */
a >> 2;  /* 00000000 01100100, 100 */
a << 2;  /* 00000110 01001000, 1608 */
~a;      /* 11111110 01101101, 4294966893 */
```

### To see more of the concepts...

| Proyects | Description |
| -------- | ----------- |
| [0x00. C - Hello, World](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x00-hello_world) | first iterations with the C language, good id with Betty, compilation concepts and more |
| [0x01. C - Variables, if, else, while](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x01-variables_if_else_while) | Managing logical operators and viewing different iterators |
| [0x02. C - Functions, nested loops](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x02-functions_nested_loops) | Handling of different iterators |
| [0x03. C - Debugging](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x03-debugging) | Debugging exercises and viewing the gdb tool |
| [0x04. C - More functions, more nested loops](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x04-more_functions_nested_loops) | Different exercises to consolidate knowledge on how to iterate different operators, solution of the Fizz-Buzz exercise |
| [0x05. C - Pointers, arrays and strings](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x05-pointers_arrays_strings) | Handling pointers, iterating words and recreating different functions already existing in the stdio.h library |
| [0x06. C - More pointers, arrays and strings](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x06-pointers_arrays_strings) | Handling more pointer iterators, printing pointer memory position and many, many more function re-creations0 |
| [0x07. C - Even more pointers, arrays and strings](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x07-pointers_arrays_strings) | Handling of multi-demand arrays, and handling of double pointers |
| [0x08. C - Recursion](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x08-recursion) | Recursion management, how to implement it and when to use it |
| [0x09. C - Static libraries](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x09-static_libraries) | How can we create a static library, step by step |
| [0x0A. C - argc, argv](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x0A-argc_argv) | Obtain parameters from the console line, how to count, read and parameterize them |
| [0x0B. C - malloc, free](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x0B-malloc_free) | How can we store a data in dynamic memory, how to release it and the creation of different data blocks |
| [0x0C. C - More malloc, free](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x0C-more_malloc_free) | More handling and different exercises to store memory as well as to release it |
| [0x0D. C - Preprocessor](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x0D-preprocessor) | Handling of variables created in the pre-processor, creation of different macros as global variables |
| [0x0E. C - Structures, typedef](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x0E-structures_typedef) | structure type data, create a structure, give it value and perform different iterations to it |
| [0x0F. C - Function pointers](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x0F-function_pointers) | Functions to pointers and why to use them, syntax management |
| [0x10. C - Variadic functions](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x10-variadic_functions) | Handling of varied lists and how we can iterate them |
| [0x11. C - printf](https://github.com/drc288/printf) | Group project where the **printf** function is created, which is a copy of the actual command |
| [0x12. C - Singly linked lists](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x12-singly_linked_lists) | First iteration with simply linked lists, understand the algorithm behind it and how to implement it |
| [0x13. C - More singly linked lists](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x13-more_singly_linked_lists) | More simple lists and exercises where they test us |
| [0x14. C - Bit manipulation](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x14-bit_manipulation) | Bit manipulation, addition, subtraction and various exercises manipulating different variables, as well as moving in memory |
| [0x15. C - File I/O](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x15-file_io) | File handling, open, write, read, close functions |
| [0x16. C - Simple Shell](https://github.com/drc288/simple_shell) | Creation of the first **interactive shell**, in this project we test what we have learned in low level, re-creating the /bin/bash |
| [0x17. C - Doubly linked lists](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x17-doubly_linked_lists) | first structures where we will handle a double linked list, different operations that we can do, delete, add or change the position of a list |
| [0x18. C - Dynamic libraries](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x18-dynamic_libraries) | Creation of dynamic libraries |
| [0x19. C - Stacks, Queues - LIFO, FIFO](https://github.com/guxal/monty) |  |Tercer proyecto donde realizamos un interpretador de listas, **monty python** |
| [0x1A. C - Hash tables](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x1A-hash_tables) | Creating a hash table, managing collisions and why it's good to use |
| [0x1B. C - Sorting algorithms & Big O](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x1B-sorting_algorithms) | use of different sorting algorithms as well as getting the big O |
| [0x1C. C - Makefiles](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x1C-makefiles) | Creation of different make files to perform different types of installations |
| [0x1D. C - Binary trees](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x1D-binary_trees) | Creation of a binary tree, how to insert elentos, how to search in a binary tree etc... |
| [0x1E. C - Search Algorithms](https://github.com/drc288/holbertonschool-low_level_programming/tree/master/0x1E-search_algorithms) | search algorithms and what is your score |

This is the end of this wonderful tour, thanks to Holberton for giving me this good experience and I will miss you betty-style
Last update 20/01/2020
