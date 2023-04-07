#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <malloc.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloced string)
 * @len: length of string
 * @next: points to the next code
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
void free_list(list_t *head);

/*Helper functions*/
char *strdup(const char *s);
int _strlen(const char *s);


#endif
