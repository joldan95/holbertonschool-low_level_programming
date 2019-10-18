#include <stdlib.h>
#include "holberton.h"

/* Must be implemented */
char *mult(char *n1, char *n2);
/* Must be modified */
char *add_numbers(char *n1, char *n2);
char *infinite_add(char *n1, char *n2, char *r, int n);
/* Must be implemented */
int check_digits(char *s);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *_memcpy(char *dest, char *src, unsigned int n);
void *_memset(char *s, char b, unsigned int n);
void _puts(char *str);

/**
 * main - Entry point of application
 *
 * @argc: Count of arguments
 * @argv: Array of strings of the elements
 *
 * Description: Compute the multiplication between two integers and
 * prints the result on the terminal.
 * If any of the arguments has a non-digit character, prints 'Error\n' and
 * exit with a status of 98.
 * If the number of arguments is greater than 2, prints 'Error\n' and
 * exit with a status of 98.
 *
 * Return: 0 if success.
 * 98 if finds an error
 */
int main(int argc, char **argv)
{
	char *p;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}

	/* checkea digitos de argv */
	if (!check_digits(argv[1]) || !check_digits(argv[2]))
	{
		_puts("Error");
		exit(98);
	}

	/* Llama a la función de multiplicación */
	p = mult(argv[1], argv[2]);
	/* Verifica retorno de puntero */
	if (p == NULL)
		return (1);
	/* imprime numero */
	_puts(p);
	/* libera puntero */
	free(p);
	/* retorna 0 */
	return (0);
}

/**
 * mult - Compute the multiplication between two integers
 * @n1: First number
 * @n2: Second number
 *
 * Description: Compute the multiplication between two integers
 * The numbers passed by parameter may contain only numbers
 *
 * Return: A pointer to the result.
 * NULL if fails the allocation process.
 */
char *mult(char *n1, char *n2)
{
	/* Def ptrs suma, suma_segura, cuenta, cuenta_segura */
	/* Def int of lengths */
	char *add, *add_scr, *count, *count_scr;
	char *max, *min;
	int lenmax, lenmin;

	/* Check the greater and lower number with strcmp */
	lenmax = _strlen(n1);
	lenmin = _strlen(n2);
	if (lenmax == lenmin)
	{
		max = (_strcmp(n1, n2) > 0 ? n1 : n2);
		min = (_strcmp(n1, n2) < 0 ? n1 : n2);
	}
	else
	{
		max = (lenmax > lenmin ? n1 : n2);
		min = (lenmax < lenmin ? n1 : n2);
	}

	lenmax = _strlen(max);
	lenmin = _strlen(min);

	/* suma = '0' with the size of max(n1, n2) - using malloc and check it */
	add = malloc((lenmax + 1) * sizeof(char));
	if (add == NULL)
		return (NULL);
	add = _memset(add, '0', lenmax);
	add[lenmax] = '\0';

	/* cuenta = '0' with the size of min(n1, n2) - using malloc and check it */
	count = malloc((lenmin + 1) * sizeof(char));
	if (count == NULL)
	{
		free(add);
		return (NULL);
	}
	count = _memset(count, '0', lenmin);
	count[lenmin] = '\0';

	/* Iteration while cuenta != min(n1, n2) */
	while (_strcmp(count, min))
	{
	    /* suma_segura = add(suma, max(n1, n2)) and check it */
		add_scr = add_numbers(add, max);
		if (add_scr == NULL)
		{
			free(add);
			free(count);
			return (NULL);
		}
	    /* free(suma), suma = suma_segura and suma_segura = NULL */
		free(add);
		add = add_scr;
	    /* cuenta_segura = add(cuenta, '1') and check it */
		count_scr = add_numbers(count, "1");
		if (count_scr == NULL)
		{
			free(add);
			free(count);
			return (NULL);
		}
	    /* free(cuenta), cuenta = cuenta_segura and cuenta_segura = NULL */
		free(count);
		count = count_scr;
	}
	/* As suma_segura and cuenta_segura are already freed and set to NULL */
	/* just free(cuenta) since it does not have use */
	/* return(suma) */
	free(count);
	return (add);
}

/**
 * add_numbers - Adds two numbers and returns a pointer created with malloc
 * @n1: Pointer to the first character of number 1. Pointer created with malloc
 * @n2: Pointer to the first character of number 2. Just readable.
 *
 * Return: Pointer to the result of the string
 */
char *add_numbers(char *n1, char *n2)
{
	int len, flen;
	char *buffer;
	char *add;
	char *add_scr;

	len = _strlen(n1) + 1;
	buffer = malloc((len + 1) * sizeof(char));

	if (buffer == NULL)
		return (NULL);

	add_scr = infinite_add(n1, n2, buffer, len + 1);

	if (add_scr == NULL)
		return (NULL);

	flen = _strlen(add_scr);
	if (flen == len)
	{
		add = add_scr;
	}
	else
	{
		add = _realloc(add_scr, len + 1, flen + 1);
		if (add == NULL)
		{
			free(buffer);
			return (NULL);
		}
	}
	add_scr = NULL;
	buffer = NULL;

	return (add);
}

/**
 * infinite_add - Adds two numbers
 * @n1: Pointer to the first character of number 1.
 * @n2: Pointer to the first character of number 2.
 * @r: Buffer where to allocate the number.
 * @n: Buffer size.
 *
 * Return: Pointer to the result of the string.
 * NULL if the compute can not be done
 */
char *infinite_add(char *n1, char *n2, char *r, int n)
{
	int len1 = 0, len2 = 0;
	int add = 0;
	int i = n - 2;


	while (n1[len1 + 1] != 0)
		len1++;
	while (n2[len2 + 1] != 0)
		len2++;
	r[n - 1] = 0;

	while (i >= 0 && (len1 >= 0 || len2 >= 0))
	{
		add += (len1 < 0 ? '0' : n1[len1]) + (len2 < 0 ? '0' : n2[len2]);
		add -= 2 * '0';
		r[i] = add % 10 + '0';
		add /= 10;
		i--;
		len1--;
		len2--;
	}

	if ((i < len1 || i < len2) || (i < 0 && add))
		return (NULL);

	add ? r[i] = add + '0' : 1;
	i += (add ? 0 : 1);

	r = _memcpy(r, r + i, n - i);
	return (r);
}

/**
 * check_digits - Check if a string just have digits
 * @s: String to check
 *
 * Return: 1 if just have digits
 * 0 if have any other character
 */
int check_digits(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - return the length of a string
 * @s: Pointer to an string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}

/**
 * _strcmp - Compares two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: The pointer to dest
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 - *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

/**
 * _realloc - allocates memory block using malloc and free
 * @ptr: pointer to the memory previosly allocated with malloc
 * @old_size: The size of the allocated space of ptr
 * @new_size: The new size to allocate
 *
 * Description: allocates a new memory block for the pointer,
 * using the contents from the original pointer, copiyng up to the
 * minimum of the old and new sizes.
 * If new_size > old_size, the added memory should not be intialized
 * If new_size == old_size, returns the same pointer
 * If ptr == NULL, call is equivalent to malloc(new_size)
 * If new_size == 0 and ptr != NULL, call is equivalent to free(ptr),
 *  and return NULL.
 *
 * Return: A pointer to the new allocated memory and free ptr.
 * NULL if can not allocate memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	if (ptr == NULL)
		return (p);

	p = _memcpy(p, ptr, (new_size > old_size ? old_size : new_size));
	free(ptr);
	return (p);
}

/**
 * _memcpy - copies the memory are from
 * src to dest
 * @dest: The destination pointer
 * @src: The source pointer
 * @n: bytes to use from src
 *
 * Return: The pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}

/**
 * _memset - Copies a character into the first
 * n bytes of memory in s
 * @s: Pointer to the block of memory
 * @b: Value to be set
 * @n: Number of bytes to be set
 *
 * Return: The pointer to the memory area of s
 */
void *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}


/**
 * _puts - prints a string, followed by a new line
 * @str: String to print
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
