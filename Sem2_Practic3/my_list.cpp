#include "my_list.h"

my_list* push_front(my_list* head, TV* tv)
{
	my_list* tmp = (my_list*)malloc(sizeof(my_list));
	tmp->tv = tv;
	tmp->next = head;
	return tmp;
}

my_list* pop_front(my_list* head)
{
	if (head == NULL) {
		return NULL;
	}
	my_list* tmp = head->next;
	free(head);
	return tmp;
}

void PrintList(my_list* head)
{
	while (head != NULL) {
		PrintTV(head->tv);
		head = head->next;
	}
}

void push(my_list** head, TV* tv) {
	if (*head == NULL) {
		*head = push_front(*head, tv);
	}
	else if (Less((*head)->tv, tv)) {
		my_list* pred = *head;
		my_list* tmp = (my_list*)malloc(sizeof(my_list));
		tmp->tv = tv;
		while (*head != NULL && Less((*head)->tv, tv))
		{
			pred = *head;
			head = &(*head)->next;
		}
		tmp->next = (*head);
		pred->next = tmp;	
	}
	else {
		*head = push_front(*head, tv);
	}
	return;
}

my_list* pop(my_list* head, TV* tv) {
	my_list* h = head;
	if (head == NULL) {
		h = pop_front(head);
	}
	else if (!Equals((head)->tv, tv)) {
		my_list* tmp = head;
		while (head != NULL && !Equals(head->tv, tv))
		{
			tmp = head;
			head = head->next;
		}
		if (head == NULL) {
			return h;
		}
		tmp->next = head->next;
		free(head);
	}
	else {
		h = pop_front(head);
	}
	return h;
}
