#ifndef _SORT_H_
#define _SORT_H_
/* Basic libreries */
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* print the array */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
/**
 * Bubble Sort - simple sorting algorithm
 * data_structure = Array
 * worst_case = O(n^^2)
 */
void bubble_sort(int *array, size_t size);
/**
 * selection_sort - a sort algorithm
 * data_structure = Array
 * worst_case = 0(n^^2)
 */
void selection_sort(int *array, size_t size);

#endif