//This program inserts an element into
//the nth position of a linked list
//z5309196 Christopher Luong 12/04/2020

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    struct node *next;
    int data;
};

struct node *insert_nth(int n, int value, struct node *head);
struct node *strings_to_list(int len, char *strings[]);
void print_list(struct node *head);

// DO NOT CHANGE THIS MAIN FUNCTION

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int value;
    scanf("%d", &value);
    // create linked list from command line arguments
    struct node *head = NULL;
    if (argc > 1) {
        // list has elements
        head = strings_to_list(argc - 1, &argv[1]);
    }

    struct node *new_head = insert_nth(n, value, head);
    print_list(new_head);
    
    return 0;
}


// Insert a new node containing value at position n of the linked list.
// if n == 0, node is inserted at start of list
// if n >= length of list, node is appended at end of list
// The head of the new list is returned.
struct node *insert_nth(int n, int value, struct node *head) {
    int i = 0;
    struct node *previous = NULL;
    struct node *p = head;   
    
    while (p != NULL && i < n) { 
        previous = p;
        p = p->next;					LOOK BELOW FOR ANOTHER FUNCTION KINDA BETTER
        i++;
    }
    struct node *new = malloc(sizeof(struct node));
    new->data = value;
    if (previous == NULL) {
        new->next = p;
        return new;
    } else {
        previous->next = new;
    }   
    if (p != NULL) {
        new->next = p;
    } else {
        new->next = NULL;
    }
    
    return head;

}


/** Insert an integer into correct place in a sorted IntList. */
void IntListInsertInOrder (IntList L, int v)
{	
	assert (L != NULL);

	struct IntListNode *prev = NULL;
	struct IntListNode *curr = L->first;
	//loop through the list until correct place is found- 
	//meaning the list will be in ascending order.
	while (curr != NULL && v >= curr->data) {
		prev = curr;
		curr = curr->next;
	}
	struct IntListNode *n = newIntListNode (v);
	//this is if the list is empty                          BETTER WAY TO DO IS CHECK IF THE LIST IS
	if (curr == NULL && prev == NULL)                       EMPTY AND IF VALUE IS SMALLEST OR LARGEST
		L->first = L->last = n;                         BEFORE DOING WHILE LOOP -> LESS RUNTIME?
	//this is if the new value is smaller than 
	//current smallest value in the list	
	else if (curr != NULL && prev == NULL) 
		L->first = n;
	else
		prev->next = n;
	//this is if the new value is larger than 
	//current largest value in the list.
	if (prev != NULL && curr == NULL) {
		L->last->next = n;
		L->last = n;
	} else
		n->next = curr;
	L->size++;
}

// DO NOT CHANGE THIS FUNCTION
// create linked list from array of strings
struct node *strings_to_list(int len, char *strings[]) {
    struct node *head = NULL;
    int i = len - 1;
    while (i >= 0) {
        struct node *n = malloc(sizeof (struct node));
        assert(n != NULL);
        n->next = head;
        n->data = atoi(strings[i]);
        head = n;
        i -= 1;
    }   
    return head;
}

// DO NOT CHANGE THIS FUNCTION
// print linked list
void print_list(struct node *head) {
    printf("[");    
    struct node *n = head;
    while (n != NULL) {
        // If you're getting an error here,
        // you have returned an invalid list
        printf("%d", n->data);
        if (n->next != NULL) {
            printf(", ");
        }
        n = n->next;
    }
    printf("]\n");
}
