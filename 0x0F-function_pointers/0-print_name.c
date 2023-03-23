#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - print name using pointer to function
* @name: string to add
* @f: pointer to function
* Return: nothing
**/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
1- array_iterator.c
#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - prints each array elem on a newl
* @array: array
* @size: how many elem to print
* @action: pointer to print in regular or hex
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	
	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
