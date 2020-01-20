# 00 - Holberton School low level programming

![Logo Holberton](/img/hbtn.png)

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

| Proyect | Description |
| ------- | ----------- |
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
