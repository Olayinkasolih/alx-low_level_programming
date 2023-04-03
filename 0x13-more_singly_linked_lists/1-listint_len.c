#include "lists.h"
/**
* listint_len - returns the number of elements in a linked lists
* @l: linked list of type listint_t to traverse
* Return: number of nodes
*/
size_t listint_len(const listint_t *l)
{
size_t num = 0;
while (l)
{
num++;
l = l->next;
}
return (num);
}
