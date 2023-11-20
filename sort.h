#ifndef SORT_H
#define SORT_H

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

/* ### sorting algorithms ### */

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

/* ## utilities ## */

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap(int *array, int a, int b);
void swap_node(listint_t *f, listint_t *s);
size_t knuth_gap(size_t size);
void quick_s(int *array, size_t size, ssize_t low, ssize_t high);
size_t partition(int *array, size_t size, ssize_t low, ssize_t high);
void swap_elm(int *array, size_t size, int *a, int *b);
void merge_partition(size_t lo, size_t hi, int *array, int *base);
void merge(size_t lo, size_t mi, size_t hi, int *dest, int *src);


#endif /* SORT_H */
