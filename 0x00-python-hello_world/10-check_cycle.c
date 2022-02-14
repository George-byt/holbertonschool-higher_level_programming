#include "lists.h"
/**
 * check_cycle - C program that checks if a singly linked
 * list has a cycle in it
 * @list: Pointer to list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
listint_t *tartaruga, *coelho;
tartaruga = coelho = list;

while (tartaruga && coelho && coelho->next)
{
tartaruga = tartaruga->next;
coelho = coelho->next->next;
if (tartaruga == coelho)
return (1);
};
return (0);
}
