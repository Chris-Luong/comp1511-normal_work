//This program deletes elements from
//a linked list until it's ordered
//z5309196 Christopher Luong 23/04/2020

#include <stdio.h>
#include <stdlib.h>

// Do not edit this struct. You may use it exactly as
// it is but you cannot make changes to it

// A node in a linked list
struct node {
    int data;
    struct node *next;
};

// ADD ANY FUNCTION DECLARATIONS YOU WISH TO USE HERE

// Remove any nodes in a list that are higher 
// than the node directly after them.
// Return the head of the list.
// The returned list must have no disorder in it!
struct node *remove_disorder(struct node *head) {
    struct node *past = head;    
    if (past != NULL) {
        struct node *curr = past->next;   
    }    
    if (curr != NULL) {
        struct node *future = curr->next;
    }
         
    if (past == NULL || (past == head 
        && curr == NULL)) {
        return head;
    } else if (curr == past->next 
               && future == NULL) {
        if (past > curr) {            
            head = curr;
            free(past);
        }
    } else if (future == curr->next &&
               future->next == NULL) {
        if (past > curr) {
            free(curr);            
            if (past > future) {
                past->next = future->next;
                free(future);
            } else {
                past->next = future;
            }
        } else if (past < curr && 
                   curr > future) {
            free(curr);
            past->next = future;
        }        
    } else {
        while (future->next != NULL) {

            if (future->next != NULL 
                && curr > future) {    
                free(curr);
                past->next = future;
            }
            past = curr;
            curr = future;
            future = future->next;            
        }
    }
    
    return head;
}

// These helper functions are for the main below and will
// have no effect on your remove_disorder. They do not
// need to be modified.
struct node *make_list(int a, int b, int c);
void printList(struct node *head);

// This is a main function which could be used
// to test your remove_disorder function.
// It will not be marked.
// Only your remove_disorder function will be marked.
//
// It's recommended to change the int values in this
// main to test whether your remove_disorder is working.
int main(void) {
    // test an ordered list
    struct node *ordered = make_list(1, 2, 3);
    ordered = remove_disorder(ordered);
    printList(ordered);
    
    // test removing one element out of order
    ordered = make_list(1, 3, 2);
    ordered = remove_disorder(ordered);
    printList(ordered);
    
    // test a completely disordered list
    ordered = make_list(3, 2, 1);
    ordered = remove_disorder(ordered);
    printList(ordered);

    // test with the first removal causing more disorder
    ordered = make_list(2, 3, 1);
    ordered = remove_disorder(ordered);
    printList(ordered);
        
    return 0;
}

// A simple function to make a linked list with 3 elements
// This function is purely for the main above
// You will be tested with lists that are more and less
// than 3 elements long
struct node *make_list(int a, int b, int c) {
    struct node *head = malloc(sizeof (struct node));
    struct node *n = head;
    n->data = a;
    n->next = malloc(sizeof (struct node));
    n = n->next;
    n->data = b;
    n->next = malloc(sizeof (struct node));
    n = n->next;
    n->data = c;
    n->next = NULL;
    
    return head;
}

void printList(struct node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
// ADD ANY FUNCTION DEFINITIONS YOU WISH TO USE HERE


