#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: integer stored in node
 * @next: pointer to next node
 *
 * Description: singly linked list structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* task 0 */
size_t print_listint(const listint_t *h);

/* task 1 */
size_t listint_len(const listint_t *h);

/* task 2 */
listint_t *add_nodeint(listint_t **head, const int n);

/* task 3 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* task 4 */
void free_listint(listint_t *head);

/* task 5 */
void free_listint2(listint_t **head);

/* task 6 */
int pop_listint(listint_t **head);

/* task 7 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* task 8 */
int sum_listint(listint_t *head);

/* task 9 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/* task 10 */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/* task 11 */
listint_t *reverse_listint(listint_t **head);

/* advanced tasks */
size_t print_listint_safe(const listint_t *head);
size_t free_listint_safe(listint_t **h);
listint_t *find_listint_loop(listint_t *head);

/* provided by checker */
int _putchar(char c);

#endif

