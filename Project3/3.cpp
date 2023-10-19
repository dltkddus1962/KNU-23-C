#include <studio.h>
#include <stdlib.h>

typedef struct _NODE {
	int data;
	struct _NODE* next;
} NODE;

void print_list(NODE* head)
{
	NODE* p = head;

	while (p->next != NULL) {
		p = p->next;
		printf("%d", p->data);
	}
	printf("\n");
}

void insert_node(NODE* head, int data)
{
	NODE* new_node = (NODE*)malloc(sizeof(NODE));
	new_node->data = data;

	NODE* p = head;
	while (p->next != NULL) {
		p = p->next;
	}
	p->next = new_node;
	new_node->next = NULL;
}

void insert_node_first(NODE* head, int data)
{
	NODE* new_node = (NODE*)malloc(sizeof(NODE));
	new_node->data = data;

	new_node->next = head->next;
	head->next = new_node;
}

void delete_node_first(NODE* head)
{
	NODE* p = head->next->next;
	head->next = p;
}

void delete_node_last(NODE* head)
{
	NODE* p_prev;
	NODE* p = head;
	while (p->next != NULL) {
		p = p->next;
	}
	free(p);
}

int main()
{
	NODE* head;
	head = (NODE*)malloc(sizeof(NODE));
	head->next = NULL;

	NODE* n1 = (NODE*)malloc(sizeof(NODE));
	n1->data = 1;
	n1->next = NULL;
	head->next = n1;

	NODE* n2 = (NODE*)malloc(sizeof(NODE));
	n2->data = 2;
	n2->next = NULL;
	n1->next = n2;

	NODE* n3 = (NODE*)malloc(sizeof(NODE));
	n3->data = 3;
	n3->next = NULL;
	n2->next = n3;

	print_list(head);

	insert_node_last(head, 4);
	insert_node_last(head, 5);

	print_list(head);
	insert_node_first(head, 6);

	print_list(head);
	delete_node_first(head);

	print_list(head);

	delete_node_last(head);

	print_list(head);

	return 0;
}
