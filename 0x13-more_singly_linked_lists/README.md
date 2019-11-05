# More Singly linked lists project

## Summary

Project make to understand the workflow of a singly linked list in C language.

## Struct

The struct that would be used for the singly linked list is at follows

```c
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
```

## Functions

It would implement basic functions for a singly linked list using the standard library

File (function) | Use
----------------|-----
0-print_listint.c | Prints all the elements of a listint_t list
1-listint_len.c | Returns the number of elements of a listint_t list
2-add_nodeint.c | Adds a new node at the beginning of a listint_t list and return the address of the new element, or NULL if it failed
3-add_nodeint_end.c | Adds a new node at the end of a listint_t list and return the address of the new element, or NULL if it failed
4-free_listint.c | Frees a listint_t list
5-free_listint2.c | Frees a listint_t list and sets the head to NULL
6-pop_listint.c | Deletes the head node of a listint_t list and returns the head node data, or 0 if the linked list is empty
7-get_nodeint.c | Returns the nth node of a listint_t list. Indexes start at 0. If the node does not exist return NULL
8-sum-listint.c | Returns the sum of the data saved on the linked list
9-insert_nodeint.c | Inserts a new node on a given position. If can add a node, return NULL
10-delete_nodeint.c | Deletes a node at a given position of a listint_t list, returning 1 if succeeded, -1 if not.
100-reverse_listint.c | Reverse a listint_t list. Returns a pointer to the first node of the reversed list.
101-
100-first.c | Prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed
101-hello_holberton.asn | 64-bit assembly program that prints `Hello, Holberton` followed by a new line. It should be compiling as `nasm -f elf64 101-hello_holberton.asm && gcc 101-hello_holberton.o -o hello`


## Author
Luis Medina.
