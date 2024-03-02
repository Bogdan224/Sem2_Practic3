#include "TV.h"
#include "my_list.h"

int main() {
	my_list* head1 = NULL;
	TV* tv1 = (TV*)malloc(sizeof(TV));
	TV* tv2 = (TV*)malloc(sizeof(TV));
	TV* tv3 = (TV*)malloc(sizeof(TV));
	TV* tv4 = (TV*)malloc(sizeof(TV));
	
	Init(tv1, "LG", 30, false);
	Init(tv2, "Sony", 40, true);
	Init(tv3, "Samsung", 35, true);
	Init(tv4, "Sber", 33, true);

	head1 = push_front(head1, tv1);
	head1 = push_front(head1, tv2);
	head1 = push_front(head1, tv3);
	
	head1 = pop_front(head1);
	
	PrintList(head1);
	printf("\n");
	
	while (head1!= NULL)
	{
		head1 = pop_front(head1);
	}

	my_list* head2 = NULL;
	push(&head2, tv1);
	push(&head2, tv2);
	push(&head2, tv3);
	push(&head2, tv4);
	
	PrintList(head2);
	printf("\n");;

	pop(head2, tv3);

	PrintList(head2);
	printf("\n");

	while (head2 != NULL)
	{
		head2 = pop_front(head2);
	}
	return 0;
}