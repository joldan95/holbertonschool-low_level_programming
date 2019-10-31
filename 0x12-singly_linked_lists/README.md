# Singly linked lists project

## Summary

Project make to understand the workflow of a singly linked list in c

## Struct

The struct that would be used for the singly linked list is at follows

```c
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
```

## Functions

It would implement basic functions for a singly linked list using the standard library

File (function) | Use
----------------|-----
0-print_list.c | Prints all the elements of a list_t list
1-list_len.c | Returns the number of elements of a list_t list
2-add_node.c | Adds a new node at the beginning of a list_t list and return the address of the new element, or NULL if it failed
3-add_node_end.c | Adds a new node at the end of a list_t list and return the address of the new element, or NULL if it failed
4-free_list.c | Frees a list_t list
100-first.c | Prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed
101-hello_holberton.asn | 64-bit assembly program that prints `Hello, Holberton` followed by a new line. It should be compiling as `nasm -f elf64 101-hello_holberton.asm && gcc 101-hello_holberton.o -o hello`

## Flowchart

```mermaid
graph LR
	  [A] --> ((C))
```
